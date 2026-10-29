__int64 __fastcall sub_2193510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v11; // r12d
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  void *v15; // r15
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  void **v20; // r13
  _BYTE *v21; // rdi
  void *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r15
  _QWORD *v26; // rax
  void **v27; // r14
  void **v28; // r15
  size_t v29; // rdx
  size_t v30; // [rsp+8h] [rbp-A0h]
  __int64 v31; // [rsp+10h] [rbp-98h] BYREF
  __int64 v32; // [rsp+18h] [rbp-90h] BYREF
  __int64 v33; // [rsp+20h] [rbp-88h] BYREF
  __int64 v34; // [rsp+28h] [rbp-80h] BYREF
  __int64 v35[2]; // [rsp+30h] [rbp-78h] BYREF
  char v36; // [rsp+40h] [rbp-68h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  _QWORD v39[9]; // [rsp+60h] [rbp-48h] BYREF

  v31 = 0;
  sub_216E3E0((__int64)v35, (__int64 *)(a1 + 56), a3, a4, a5, a6);
  if ( (v36 & 1) != 0 )
  {
    n = 0;
    v9 = 0;
    src = nullptr;
    goto LABEL_4;
  }
  v6 = (a2 - v35[0]) / (unsigned __int64)(unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)(a1 + 56) + 46LL), 8);
  v7 = *(_DWORD *)(a2 + 4) == 335544384;
  v8 = (unsigned int)v6;
  v31 = (unsigned int)v6;
  if ( v7 )
  {
    v11 = v6 + 1;
    v12 = *(unsigned int *)(a1 + 152);
    if ( v11 <= (unsigned int)v12 || v11 == v12 )
    {
      v13 = *(_QWORD *)(a1 + 144);
    }
    else
    {
      v23 = 16LL * v11;
      if ( v11 < v12 )
      {
        v13 = *(_QWORD *)(a1 + 144);
        v27 = (void **)(v13 + 16 * v12);
        v28 = (void **)(v13 + v23);
        if ( v27 != v28 )
        {
          do
          {
            while ( 1 )
            {
              v27 -= 2;
              if ( *v27 == v27 + 2 )
                break;
              free(*v27);
              if ( v28 == v27 )
                goto LABEL_38;
            }
          }
          while ( v28 != v27 );
LABEL_38:
          v8 = (unsigned int)v31;
          v13 = *(_QWORD *)(a1 + 144);
        }
      }
      else
      {
        if ( v11 > (unsigned __int64)*(unsigned int *)(a1 + 156) )
        {
          sub_2193370(a1 + 144, v11);
          v12 = *(unsigned int *)(a1 + 152);
          v8 = (unsigned int)v31;
        }
        v13 = *(_QWORD *)(a1 + 144);
        v24 = v13 + 16 * v12;
        v25 = v13 + v23;
        if ( v24 != v25 )
        {
          do
          {
            *(_DWORD *)(v24 + 8) = 0;
            *(_QWORD *)v24 = v24 + 16;
            *(_DWORD *)(v24 + 12) = 0;
            v24 += 16;
          }
          while ( v25 != v24 );
          v13 = *(_QWORD *)(a1 + 144);
        }
      }
      *(_DWORD *)(a1 + 152) = v11;
    }
    v14 = v13 + 16 * v8;
    if ( !*(_DWORD *)(v14 + 8) )
    {
      (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)a1 + 176LL))(&src, a1, a2);
      v15 = src;
      v30 = n;
      sub_111E010((__int64 *)&src);
      n = (size_t)&v31;
      v39[0] = &v32;
      v32 = 0;
      src = (void *)a1;
      v34 = v14;
      sub_217FDB0(
        &v33,
        (__int64)v15,
        v30,
        (void (__fastcall *)(__int64, unsigned __int64, bool))sub_21805D0,
        (__int64)&v34,
        v16,
        (void (__fastcall *)(__int64, __int64, __int64))sub_217ED50,
        (__int64)&src);
      if ( v33 )
      {
        if ( *(_DWORD *)(v14 + 12) )
        {
          v17 = *(_QWORD **)v14;
          if ( !*(_DWORD *)(v14 + 8) || (*v17 = 0, v17[1] = 0, !*(_DWORD *)(v14 + 8)) )
          {
            *v17 = 0;
            v17[1] = 0;
          }
          *(_DWORD *)(v14 + 8) = 1;
        }
        else
        {
          *(_DWORD *)(v14 + 8) = 0;
          sub_2237220(v14, v14 + 16, 1, 16);
          v26 = *(_QWORD **)v14;
          *v26 = 0;
          v26[1] = 0;
          *(_DWORD *)(v14 + 8) = 1;
        }
        v18 = (unsigned int)(v31 + 1);
        if ( (unsigned int)v18 > *(_DWORD *)(a1 + 168) )
          sub_2191390(a1 + 160, v18);
        v19 = v33;
        v33 = 0;
        v34 = v19;
        sub_2221210(&src, &v34);
        v20 = (void **)(*(_QWORD *)(a1 + 160) + 32LL * (unsigned int)v31);
        v21 = *v20;
        if ( src == v39 )
        {
          v29 = n;
          if ( n )
          {
            if ( n == 1 )
              *v21 = v39[0];
            else
              memcpy(v21, src, n);
            v29 = n;
            v21 = *v20;
          }
          v20[1] = (void *)v29;
          v21[v29] = 0;
          v21 = src;
          goto LABEL_19;
        }
        if ( v21 == (_BYTE *)(v20 + 2) )
        {
          *v20 = src;
          v20[1] = (void *)n;
          v20[2] = (void *)v39[0];
        }
        else
        {
          *v20 = src;
          v22 = v20[2];
          v20[1] = (void *)n;
          v20[2] = (void *)v39[0];
          if ( v21 )
          {
            src = v21;
            v39[0] = v22;
LABEL_19:
            n = 0;
            *v21 = 0;
            if ( src != v39 )
              operator delete(src);
            if ( v34 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            goto LABEL_3;
          }
        }
        v21 = v39;
        src = v39;
        goto LABEL_19;
      }
    }
  }
LABEL_3:
  v9 = v31;
LABEL_4:
  sub_216F680(v35);
  return v9;
}
