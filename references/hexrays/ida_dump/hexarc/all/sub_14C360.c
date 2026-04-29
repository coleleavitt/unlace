__int64 __fastcall sub_14C360(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // edx
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 v14; // rax
  _DWORD *v15; // r10
  char *v16; // rdi
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // r8
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rsi
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int8 *v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 *v30; // [rsp+8h] [rbp-A0h]
  _DWORD *v31; // [rsp+8h] [rbp-A0h]
  _DWORD *v32; // [rsp+10h] [rbp-98h]
  int v33; // [rsp+24h] [rbp-84h]
  __int64 v34; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v35; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 *v36; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
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
    v34 = a4;
    v37 = 0xFFFFFFFF00000000LL;
    v38 = 0;
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
          v31 = a6;
          v32 = v15;
          v20 = sub_1196C0((char *)v15 + 48, &v36, 0);
          a6 = v31;
          if ( v20 )
          {
            if ( !v36 )
            {
              v21 = sub_1161E0(*((_QWORD *)v32 + 5), &v36);
              a6 = v31;
              if ( v21 )
              {
                v22 = sub_323690(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL), *(unsigned int *)(v21 + 4), 0);
                a6 = v31;
                if ( (v22 & (v22 - 1)) == 0 )
                {
                  v33 = log2ceil(v22);
                  v23 = j__qalloc_or_throw(80);
                  v24 = *((_QWORD *)v32 + 3);
                  *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v23 + 40) = 0;
                  *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v23 + 56) = 0;
                  *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v23 + 72) = 0;
                  sub_329320(v23, v24);
                  *(_DWORD *)v23 = 14;
                  sub_11EAC0(v23 + 32, v36);
                  v25 = *((_DWORD *)v36 + 1);
                  v26 = 8 * v25 - 1 - v33;
                  v27 = 1LL << v26;
                  if ( (unsigned __int64)v26 >= 0x40 )
                    v27 = 0;
                  sub_11A350(v23 + 48, a1, v27, v25, *((_QWORD *)v32 + 3), 0);
                  *(_DWORD *)(v23 + 68) = *((_DWORD *)v36 + 1);
                  sub_1166E0((__int64)&v37);
                  v38 = v23;
                  LOBYTE(v37) = 4;
                  HIDWORD(v37) = *((_DWORD *)v36 + 1);
                  v30 = &v37;
LABEL_11:
                  v16 = (char *)sub_1161E0(v11, &v35);
                  if ( !v16 || !(unsigned __int8)sub_1196C0(v16, &v36, 0) || v36 )
                  {
                    v17 = j__qalloc_or_throw(80);
                    *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v17 + 40) = 0;
                    *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v17 + 56) = 0;
                    *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v17 + 72) = 0;
                    *(_OWORD *)(v17 + 8) = 0;
                    sub_11ECE0(v17, v11);
                    v18 = *(_DWORD *)(v17 + 36);
                    *(_DWORD *)v17 = 13;
                    *(_DWORD *)(v17 + 68) = v18;
                    sub_1166E0(a2);
                    *(_BYTE *)a2 = 4;
                    *(_QWORD *)(a2 + 8) = v17;
                    v19 = v34;
                    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v17 + 68);
                    if ( !(unsigned __int8)sub_14C210(a1, a3, a4, a2, v19, (__int64)v30) )
                    {
                      sub_116350((char *)(v17 + 32), (char *)(v17 + 48));
                      v12 = sub_14C210(a1, a3, a4, a2, v34, (__int64)v30);
LABEL_16:
                      sub_1166E0((__int64)&v37);
                      return v12;
                    }
LABEL_30:
                    v12 = 1;
                    goto LABEL_16;
                  }
                  v28 = v35;
                  if ( *v35 == 4 )
                  {
                    v29 = *((_QWORD *)v35 + 1);
                    if ( (unsigned int)(*(_DWORD *)v29 - 8) <= 1 )
                    {
                      v28 = (unsigned __int8 *)(v29 + 32);
                      v35 = (unsigned __int8 *)(v29 + 32);
                    }
                  }
                  if ( (unsigned __int8)sub_14C210(a1, a3, a4, (__int64)v28, v34, (__int64)v30) )
                  {
                    sub_11EAC0(a2, v35);
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
    v30 = (unsigned __int64 *)sub_305FC0(a1, a3, &v34, a6);
    if ( !v30 )
      goto LABEL_33;
    goto LABEL_11;
  }
  v12 = 0;
  if ( *a5 == 33 )
    goto LABEL_6;
  return v12;
}
