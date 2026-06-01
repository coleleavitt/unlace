__int64 __fastcall sub_BC01A0(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // r12
  _DWORD *v9; // rax
  unsigned int v10; // eax
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r14
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  _DWORD *v19; // rdx
  _DWORD *v20; // rdx
  _DWORD *v21; // rbp
  int v22; // r14d
  int v23; // eax
  __int64 v24; // rdi
  unsigned int *v25; // rax
  unsigned int v26; // eax
  _DWORD *v27; // rdx
  _DWORD *v28; // rdx
  _DWORD *v29; // r13
  _DWORD *v30; // rdx
  _DWORD *v31; // rsi
  unsigned int v32; // [rsp+0h] [rbp-88h]
  int v33[2]; // [rsp+0h] [rbp-88h]
  __int64 v34; // [rsp+8h] [rbp-80h]
  _DWORD *v35; // [rsp+10h] [rbp-78h]
  int v36; // [rsp+18h] [rbp-70h]
  int v37; // [rsp+1Ch] [rbp-6Ch]
  int v38; // [rsp+1Ch] [rbp-6Ch]
  __int64 v39; // [rsp+30h] [rbp-58h]
  unsigned int v40; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v41[9]; // [rsp+40h] [rbp-48h] BYREF

  result = 0;
  v32 = *(_DWORD *)(a1 + 432);
  if ( v32 && !*(_BYTE *)(a1 + 560) )
  {
    v3 = sub_180C100(a1 + 3960, 24);
    *(_QWORD *)v3 = off_1C54EE8;
    *(_QWORD *)(v3 + 8) = a1 + 560;
    *(_BYTE *)(v3 + 16) = 0;
    v41[0] = v3;
    sub_BB4880((_QWORD *)(a1 + 3944), v41);
    *(_BYTE *)(a1 + 560) = 1;
    if ( v32 != 1 )
    {
      v39 = v32;
      v4 = 1;
      v40 = v32;
      do
      {
        v6 = v4;
        v7 = 4 * v4;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 464) + 4 * v4 - 4));
        if ( *(_WORD *)(v8 + 4)
          || (v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) == nullptr
          || *v9 != *(_DWORD *)(a1 + 1744)
          || (v9[1] != 46 || *(_DWORD *)(v8 + 24) != 2) && (v9[1] != 47 || *(_DWORD *)(v8 + 24) != 2) )
        {
          sub_1872CE0("");
          sub_1873130(114, 669);
        }
        v29 = *(_DWORD **)(v8 + 40);
        v35 = *(_DWORD **)(v8 + 32);
        v34 = v4;
        v10 = sub_B645B0(*(_QWORD *)(a1 + 16), (unsigned int *)v8);
        v11 = *(_DWORD *)(a1 + 1744);
        v12 = v34;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v10) == 0xFF )
        {
          v10 ^= 1u;
          if ( !*(_WORD *)(v8 + 4) && (v27 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) != nullptr && *v27 == v11 )
          {
            v31 = v35;
            v35 = v29;
            v29 = v31;
          }
          else
          {
            v28 = v35;
            v35 = v29;
            v29 = v28;
          }
        }
        if ( v6 < v40 )
        {
          v36 = v10 ^ 1;
          v13 = 4 * (v34 + v40 - 1 - v6);
          while ( 1 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 464) + v7));
            if ( *(_WORD *)(v14 + 4) || (v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL)) == nullptr || *v15 != v11 )
            {
LABEL_19:
              sub_1872CE0("");
              sub_1873130(114, 681);
            }
            if ( v15[1] == 46 && *(_DWORD *)(v14 + 24) == 2 )
            {
              v21 = *(_DWORD **)(v14 + 32);
              *(_QWORD *)v33 = *(_QWORD *)(v14 + 40);
            }
            else
            {
              if ( v15[1] != 47 || *(_DWORD *)(v14 + 24) != 2 )
                goto LABEL_19;
              v21 = *(_DWORD **)(v14 + 32);
              *(_QWORD *)v33 = *(_QWORD *)(v14 + 40);
            }
            v16 = (unsigned int)sub_B645B0(*(_QWORD *)(a1 + 16), (unsigned int *)v14);
            v17 = *(_QWORD *)(a1 + 16);
            v18 = v16;
            if ( *(_BYTE *)(*(_QWORD *)(v17 + 8848) + v16) == 0xFF )
            {
              v18 = v16 ^ 1;
              if ( !*(_WORD *)(v14 + 4)
                && (v19 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL)) != nullptr
                && *v19 == *(_DWORD *)(a1 + 1744) )
              {
                v30 = v21;
                v21 = *(_DWORD **)v33;
                *(_QWORD *)v33 = v30;
              }
              else
              {
                v20 = v21;
                v21 = *(_DWORD **)v33;
                *(_QWORD *)v33 = v20;
              }
            }
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8656) + 8LL * (unsigned int)*v21) + 8LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8656) + 8LL * (unsigned int)*v29) + 8LL) )
            {
              v22 = dword_1C7ED94;
              if ( v29 != v21 )
              {
                v37 = v18;
                v23 = sub_966380(a1, v29, v21);
                v18 = v37;
                v22 = v23;
              }
              v38 = v18;
              v24 = *(_QWORD *)(a1 + 1736);
              v41[0] = v35;
              v41[1] = *(_QWORD *)v33;
              v25 = (unsigned int *)sub_15E1AF0(v24);
              v26 = sub_966440(a1, v25);
              sub_BBF3C0((_QWORD *)a1, v36, v38 ^ 1, v22 ^ 1, v26, 0xFFFFFFFE, a2);
              if ( v13 == v7 )
              {
LABEL_28:
                v12 = v34;
                break;
              }
            }
            else if ( v13 == v7 )
            {
              goto LABEL_28;
            }
            v11 = *(_DWORD *)(a1 + 1744);
            v7 += 4;
          }
        }
        v4 = v12 + 1;
      }
      while ( v39 != v4 );
    }
    return 1;
  }
  return result;
}

