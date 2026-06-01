__int64 __fastcall sub_4CADA0(__int64 *a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  unsigned int *v15; // r12
  char *v16; // r15
  unsigned int v17; // r13d
  unsigned __int64 v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-A0h]
  __int64 v26; // [rsp+10h] [rbp-98h]
  unsigned int v27; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v28[2]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v29; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-70h]
  __m128i v31; // [rsp+40h] [rbp-68h] BYREF
  void *v32; // [rsp+50h] [rbp-58h] BYREF
  __int128 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !a4 || (a3 & 0x80000000) != 0 || (*((_WORD *)a4 + 6) & 0x1010) == 0 && *((_DWORD *)a4 + 1) == -1 )
    return 0;
  v7 = sub_3B9AA0((__int64)a1, a2, 0);
  v8 = v7;
  v9 = v7 & 0x600;
  if ( v9 != 1024 )
  {
LABEL_9:
    if ( (unsigned __int8)is_off(v8, a3) )
    {
LABEL_10:
      v11 = *a4;
      v12 = *((_DWORD *)a4 + 2);
      v13 = *((_DWORD *)a4 + 3);
      v25 = v11;
      if ( (unsigned __int8)sub_4CAB10(a1, &v31, a2, a3)
        && v31.m128i_i32[3] == v13
        && v31.m128i_i64[0] == v25
        && v31.m128i_i32[2] == v12 )
      {
        return 1;
      }
      v30 = __PAIR64__(v13, v12);
      v29 = v25;
      if ( (unsigned __int8)sub_4CABE0(a1, a2, a3, (unsigned int *)&v29) )
      {
        sub_396090(0x11u, a2, a3);
        v14 = a2 + 1;
        if ( v9 == 1024 )
        {
          v28[0] = a2;
          v28[1] = a2 + 1;
          v32 = nullptr;
          v33 = 0;
          sub_3FD940((__int64)a1, v28, (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))sub_4CA0D0, (__int64)&v32);
          v15 = (unsigned int *)v32;
          v16 = (char *)v32 + 4 * v33;
          if ( v16 != v32 )
          {
            do
            {
              v17 = *v15;
              v18 = sub_3B9AA0((__int64)a1, *v15, 0);
              if ( (~BYTE1(v18) & 6) == 0 && (unsigned __int8)is_off(v18, 15) )
              {
                v26 = *a1;
                v28[0] = ea2node(v17);
                v19 = 8;
                while ( 1 )
                {
                  v20 = sub_79B840(v28, v26, v19, 83);
                  v21 = v20;
                  if ( v20 > 0x24 )
                    break;
                  if ( v20 - 27 <= 5 )
                  {
                    v19 = 32;
                  }
                  else if ( v20 - 15 <= 5 )
                  {
                    v19 = 20;
                  }
                  else
                  {
                    v22 = v20 - 9;
                    v27 = v21;
                    if ( (unsigned int)v22 > 0x1B )
                    {
                      sub_396090(0x11u, v17, 0xFFFFFFFFLL);
                      v19 = v27;
                    }
                    else
                    {
                      sub_396090(0x11u, v17, dword_2389F00[v22]);
                      v19 = v27;
                      if ( v27 == 36 )
                        break;
                    }
                  }
                }
              }
              ++v15;
            }
            while ( v16 != (char *)v15 );
            v15 = (unsigned int *)v32;
          }
          if ( v15 )
          {
            *(_QWORD *)&v33 = 0;
            qfree(v15);
          }
        }
        goto LABEL_37;
      }
      return (unsigned int)sub_3CB3B0(a1, a2, a3) ^ 1;
    }
    goto LABEL_34;
  }
  v10 = (unsigned int)v7 & 0xF0000000;
  if ( v10 == 2415919104 )
    return 0;
  if ( v10 <= 0x90000000 )
  {
    if ( ((v10 - 1342177280) & 0xFFFFFFFFE0000000LL) == 0 || v10 == 0x80000000 )
      return 0;
    goto LABEL_9;
  }
  if ( (v8 & 0xE0000000) == 0xA0000000 || v10 == 3489660928 )
    return 0;
  if ( (unsigned __int8)is_off(v8, a3) )
    goto LABEL_10;
LABEL_34:
  if ( !(unsigned __int8)sub_3CFA90(a1, a2, 0x55555505500000LL, a3) )
    return 0;
  v24 = a4[1];
  v29 = *a4;
  v30 = v24;
  if ( (unsigned __int8)sub_4CABE0(a1, a2, a3, (unsigned int *)&v29) )
  {
    sub_396090(0x11u, a2, a3);
    v14 = a2 + 1;
LABEL_37:
    sub_3A1A90(a1, a2, v14, 0x28u);
    return 1;
  }
  return (unsigned int)sub_3CB3B0(a1, a2, a3) ^ 1;
}

