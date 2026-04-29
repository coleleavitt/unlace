__int64 __fastcall sub_152A20(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // edx
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 v14; // rax
  _DWORD *v15; // r10
  unsigned __int8 **v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rdi
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // r8
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rsi
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rax
  unsigned __int8 *v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 *v36; // [rsp+8h] [rbp-A0h]
  _DWORD *v37; // [rsp+8h] [rbp-A0h]
  _DWORD *v38; // [rsp+10h] [rbp-98h]
  int v39; // [rsp+24h] [rbp-84h]
  __int64 v40; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v41; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 *v42; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-58h] BYREF
  __int64 v44; // [rsp+58h] [rbp-50h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( (a6[1] & 0x10) != 0 )
    return 0;
  v7 = *a6;
  v11 = (__int64)a5;
  if ( *a6 == 33 )
  {
    v7 = *a5;
    v14 = (__int64)a6;
    a6 = a5;
    v11 = v14;
LABEL_6:
    v15 = a6;
    v40 = a4;
    v43 = 0xFFFFFFFF00000000LL;
    v44 = 0;
    if ( (unsigned int)(v7 - 8) <= 1 )
    {
      while ( *((_BYTE *)v15 + 32) == 4 )
      {
        v15 = *((_DWORD **)v15 + 5);
        if ( (unsigned int)(*v15 - 8) > 1 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( v15 )
      {
        if ( *v15 == 32 && *((_BYTE *)v15 + 32) == 4 && **((_DWORD **)v15 + 5) == 20 )
        {
          v37 = a6;
          v38 = v15;
          v23 = sub_11FD80((char *)v15 + 48, &v42, 0);
          a6 = v37;
          if ( v23 )
          {
            if ( !v42 )
            {
              v24 = sub_11C8A0(*((_QWORD *)v38 + 5), &v42);
              a6 = v37;
              if ( v24 )
              {
                v25 = *(unsigned int *)(v24 + 4);
                v26 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL), v25, 0);
                a6 = v37;
                if ( (v26 & (v26 - 1)) == 0 )
                {
                  v39 = log2ceil();
                  v29 = j__qalloc_or_throw(80, v25, v27, v28);
                  v30 = *((_QWORD *)v38 + 3);
                  *(_QWORD *)(v29 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v29 + 40) = 0;
                  *(_QWORD *)(v29 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v29 + 56) = 0;
                  *(_QWORD *)(v29 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v29 + 72) = 0;
                  sub_330970(v29, v30);
                  *(_DWORD *)v29 = 14;
                  sub_125180(v29 + 32, v42);
                  v31 = *((_DWORD *)v42 + 1);
                  v32 = 8 * v31 - 1 - v39;
                  v33 = 1LL << v32;
                  if ( (unsigned __int64)v32 >= 0x40 )
                    v33 = 0;
                  sub_120A10(v29 + 48, a1, v33, v31, *((_QWORD *)v38 + 3), 0);
                  *(_DWORD *)(v29 + 68) = *((_DWORD *)v42 + 1);
                  sub_11CDA0((__int64)&v43);
                  v44 = v29;
                  LOBYTE(v43) = 4;
                  HIDWORD(v43) = *((_DWORD *)v42 + 1);
                  v36 = &v43;
LABEL_11:
                  v16 = &v41;
                  v19 = (char *)sub_11C8A0(v11, &v41);
                  if ( !v19 || (v16 = &v42, !(unsigned __int8)sub_11FD80(v19, &v42, 0)) || v42 )
                  {
                    v20 = j__qalloc_or_throw(80, (__int64)v16, v17, v18);
                    *(_QWORD *)(v20 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v20 + 40) = 0;
                    *(_QWORD *)(v20 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v20 + 56) = 0;
                    *(_QWORD *)(v20 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v20 + 72) = 0;
                    *(_OWORD *)(v20 + 8) = 0;
                    sub_1253A0(v20, v11);
                    v21 = *(_DWORD *)(v20 + 36);
                    *(_DWORD *)v20 = 13;
                    *(_DWORD *)(v20 + 68) = v21;
                    sub_11CDA0(a2);
                    *(_BYTE *)a2 = 4;
                    *(_QWORD *)(a2 + 8) = v20;
                    v22 = v40;
                    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v20 + 68);
                    if ( !(unsigned __int8)sub_1528D0(a1, a3, a4, a2, v22, (__int64)v36) )
                    {
                      sub_11CA10((char *)(v20 + 32), (char *)(v20 + 48));
                      v12 = sub_1528D0(a1, a3, a4, a2, v40, (__int64)v36);
LABEL_16:
                      sub_11CDA0((__int64)&v43);
                      return v12;
                    }
LABEL_30:
                    v12 = 1;
                    goto LABEL_16;
                  }
                  v34 = v41;
                  if ( *v41 == 4 )
                  {
                    v35 = *((_QWORD *)v41 + 1);
                    if ( (unsigned int)(*(_DWORD *)v35 - 8) <= 1 )
                    {
                      v34 = (unsigned __int8 *)(v35 + 32);
                      v41 = (unsigned __int8 *)(v35 + 32);
                    }
                  }
                  if ( (unsigned __int8)sub_1528D0(a1, a3, a4, (__int64)v34, v40, (__int64)v36) )
                  {
                    sub_125180(a2, v41);
                    goto LABEL_30;
                  }
LABEL_33:
                  v12 = 0;
                  goto LABEL_16;
                }
              }
            }
          }
        }
      }
    }
    v36 = (unsigned __int64 *)sub_30D340(a1, a3, &v40, a6);
    if ( !v36 )
      goto LABEL_33;
    goto LABEL_11;
  }
  v12 = 0;
  if ( *a5 == 33 )
    goto LABEL_6;
  return v12;
}
