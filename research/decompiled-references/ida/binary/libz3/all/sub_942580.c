__int64 __fastcall sub_942580(__int64 a1, unsigned int *a2, double a3)
{
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // r15d
  _DWORD *v8; // rax
  __int64 v10; // rbp
  _DWORD *v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbp
  int v15; // r15d
  _DWORD *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int *v20; // r13
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // rax
  unsigned int v27; // eax
  _DWORD *v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rdx
  _DWORD *v31; // rax
  _DWORD *v32; // rdx
  int v33; // [rsp+0h] [rbp-98h]
  unsigned int v34; // [rsp+0h] [rbp-98h]
  __int64 v35; // [rsp+8h] [rbp-90h]
  unsigned int v36; // [rsp+1Ch] [rbp-7Ch]
  char v37; // [rsp+27h] [rbp-71h] BYREF
  __int64 v38; // [rsp+28h] [rbp-70h] BYREF
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  unsigned int *v40; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v41[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = sub_186AF30(a1, a2);
  if ( !(_BYTE)v5 )
  {
    v6 = *((_QWORD *)a2 + 5);
    if ( !*(_WORD *)(v6 + 4) )
    {
      v7 = v5;
      v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
      if ( v8 )
      {
        if ( *v8 == 5 && !v8[1] )
        {
          v41[0] = 0;
          v10 = *((_QWORD *)a2 + 4);
          v41[1] = 0;
          v41[2] = 1;
          v41[3] = 0;
          sub_1666AE0(a1 + 88, v6, v41, &v37);
          v33 = sub_182D050(qword_1C7F2C0, v41);
          if ( *(_WORD *)(v10 + 4) )
            goto LABEL_14;
          if ( (unsigned __int8)sub_91CC40(v10, &v38, &v39) )
          {
            if ( (unsigned __int8)sub_91EF50(a1 + 88, v39, &v40) )
            {
              v12 = v40;
              if ( *((_WORD *)v40 + 2) || (v28 = *(_DWORD **)(*((_QWORD *)v40 + 2) + 24LL)) == nullptr || *v28 != 5 )
              {
                v29 = v38;
                if ( *(_WORD *)(v38 + 4) )
                  goto LABEL_57;
                v30 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
                if ( !v30 || *v30 != 5 )
                  goto LABEL_57;
              }
            }
            if ( *(_WORD *)(v10 + 4) )
              goto LABEL_14;
          }
          if ( !(unsigned __int8)sub_91CC40(v10, &v38, &v39) )
          {
LABEL_11:
            if ( !(unsigned __int8)sub_91CC90(v10, &v38, &v39) )
              goto LABEL_12;
            if ( (unsigned __int8)sub_3DB3F0(a1 + 88, v38) )
            {
              if ( *(_WORD *)(v39 + 4) || (v26 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL)) == nullptr || *v26 != 5 )
              {
                v12 = (unsigned int *)v39;
                v10 = sub_922B50(a1, v39);
                goto LABEL_15;
              }
            }
            if ( !*(_WORD *)(v10 + 4) )
            {
LABEL_12:
              v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
              if ( v11 && *v11 == 5 )
                goto LABEL_25;
            }
LABEL_14:
            v12 = (unsigned int *)sub_922B50(a1, v10);
LABEL_15:
            v13 = (unsigned int)sub_9394F0(a1, v12);
            v14 = (unsigned int)sub_9394F0(a1, (unsigned int *)v10);
            if ( (_DWORD)v13 != -1 && (_DWORD)v14 != -1 )
            {
              v15 = v33;
              if ( !*((_WORD *)a2 + 2) )
              {
                v16 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
                if ( v16 )
                {
                  if ( *v16 == 5 && v16[1] == 3 )
                  {
                    v27 = v13;
                    v15 = -v33;
                    v13 = (unsigned int)v14;
                    v14 = v27;
                  }
                }
              }
              v17 = *(_QWORD *)(a1 + 16);
              v18 = *(_QWORD *)(v17 + 8832);
              if ( v18 )
              {
                v19 = *a2;
                if ( (unsigned int)v19 < *(_DWORD *)(v18 - 4) && *(_DWORD *)(v18 + 4 * v19) != 0x7FFFFFFF )
                  goto LABEL_23;
              }
              v34 = sub_B67520(v17, a2);
              sub_8F1CE0(*(_QWORD *)(a1 + 16), v34, *(_DWORD *)(a1 + 8));
              v20 = (unsigned int *)sub_186B270(0x10u);
              v20[1] = v13;
              *v20 = v34;
              v20[2] = v14;
              v20[3] = v15;
              v40 = v20;
              sub_92F820((_QWORD *)(a1 + 168), &v40);
              v21 = *(_QWORD *)(a1 + 176);
              if ( v21 )
              {
                v22 = *(_DWORD *)(v21 - 4);
                v36 = v22;
                if ( v34 >= v22 )
                {
                  v23 = v34 + 1;
                  if ( v22 < v34 + 1 )
                  {
LABEL_31:
                    while ( !v21 || *(_DWORD *)(v21 - 8) < v23 )
                    {
                      sub_9424A0((unsigned int **)(a1 + 176));
                      v21 = *(_QWORD *)(a1 + 176);
                    }
                    *(_DWORD *)(v21 - 4) = v23;
                    v24 = 8LL * v23;
                    v25 = 8LL * v36;
                    if ( v25 != v24 )
                    {
                      v35 = v21;
                      memset((void *)(v21 + v25), 0, v24 - v25);
                      v21 = v35;
                    }
                    goto LABEL_35;
                  }
                  *(_DWORD *)(v21 - 4) = v23;
                }
              }
              else
              {
                v23 = v34 + 1;
                if ( v34 != -1 )
                {
                  v36 = 0;
                  goto LABEL_31;
                }
              }
LABEL_35:
              *(_QWORD *)(v21 + 8LL * v34) = v20;
              sub_92F820((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v13) + 16 * v14 + 8), &v40);
              sub_92F820((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v14) + 16 * v13 + 8), &v40);
LABEL_23:
              v7 = 1;
LABEL_24:
              sub_25A130((char *)v41);
              return v7;
            }
LABEL_25:
            sub_927D50(a1, (__int64)a2, a3);
            goto LABEL_24;
          }
          if ( !(unsigned __int8)sub_91EF50(a1 + 88, v38, &v40)
            || (v12 = v40, !*((_WORD *)v40 + 2))
            && (v31 = *(_DWORD **)(*((_QWORD *)v40 + 2) + 24LL)) != nullptr
            && *v31 == 5
            || (v29 = v39, !*(_WORD *)(v39 + 4))
            && (v32 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL)) != nullptr
            && *v32 == 5 )
          {
            if ( *(_WORD *)(v10 + 4) )
              goto LABEL_14;
            goto LABEL_11;
          }
LABEL_57:
          v10 = v29;
          goto LABEL_15;
        }
      }
    }
  }
  v7 = 0;
  sub_927D50(a1, (__int64)a2, a3);
  return v7;
}

