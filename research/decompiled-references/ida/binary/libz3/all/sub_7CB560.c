__int64 __fastcall sub_7CB560(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // r12
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  unsigned int v15; // r14d
  __int64 v16; // r12
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v24; // [rsp+10h] [rbp-88h]
  __int64 v25; // [rsp+10h] [rbp-88h]
  __m128i v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h]
  __m128i v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]

  v1 = a1[221];
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 - 4);
    if ( v2 )
    {
      v3 = 8LL * (unsigned int)(v2 - 1);
      v4 = 0;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v1 + v3);
        if ( !(unsigned __int8)sub_15D2CB0(a1[18], *(_QWORD *)v5) || !(unsigned __int8)sub_79AAE0((__int64)a1, v5) )
          break;
        v6 = *(_DWORD *)(v5 + 24);
        if ( v6 == 1 )
        {
          v7 = *(unsigned __int8 *)(v5 + 13);
          if ( !(_BYTE)v7 || **(_QWORD **)(v5 + 64) == *(_QWORD *)(a1[18] + 856LL) )
            break;
          v8 = (32 * *(_DWORD *)(v5 + 28)) | 1u;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 392LL))(a1) )
          {
            sub_1872CE0("");
            sub_1873130(114, 638);
          }
          v12 = a1[215];
          if ( v12 )
          {
            v13 = **(unsigned int **)(a1[18] + 856LL);
            if ( (unsigned int)v13 >= *(_DWORD *)(v12 - 4) )
              LODWORD(v12) = 0;
            else
              v12 = *(_QWORD *)(v12 + 8 * v13);
          }
          v27 = v8;
          v26.m128i_i32[0] = 2;
          v26.m128i_i8[8] = 0;
          v14 = _mm_load_si128(&v26);
          v24 = v8;
          v4 = v7;
          sub_13D9120((_DWORD)a1 + 1592, v5, v12, v9, v10, v11, v14.m128i_i32[0], v14.m128i_i32[2], v24);
          if ( *(_DWORD *)(v5 + 24) != -1 )
            break;
        }
        else if ( v6 != -1 )
        {
          break;
        }
        v15 = *(unsigned __int8 *)(v5 + 13);
        if ( !(_BYTE)v15 || *(_QWORD *)(a1[18] + 864LL) == **(_QWORD **)(v5 + 64) )
          break;
        v16 = (32 * *(_DWORD *)(v5 + 28)) | 0x11u;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 392LL))(a1) )
        {
          sub_1872CE0("");
          sub_1873130(114, 643);
        }
        v20 = a1[215];
        if ( v20 )
        {
          v21 = **(unsigned int **)(a1[18] + 864LL);
          if ( (unsigned int)v21 >= *(_DWORD *)(v20 - 4) )
            LODWORD(v20) = 0;
          else
            v20 = *(_QWORD *)(v20 + 8 * v21);
        }
        v29 = v16;
        v28.m128i_i32[0] = 2;
        v3 -= 8;
        v28.m128i_i8[8] = 0;
        v22 = _mm_load_si128(&v28);
        v25 = v16;
        v4 = v15;
        sub_13D9120((_DWORD)a1 + 1592, v5, v20, v17, v18, v19, v22.m128i_i32[0], v22.m128i_i32[2], v25);
        if ( v3 == -8 )
          return v4;
LABEL_6:
        v1 = a1[221];
      }
      v3 -= 8;
      if ( v3 == -8 )
        return v4;
      goto LABEL_6;
    }
  }
  return 0;
}

