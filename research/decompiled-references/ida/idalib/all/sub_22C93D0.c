__int64 __fastcall sub_22C93D0(__int64 a1, __int64 a2, void *a3, void *a4)
{
  void (__fastcall *v8)(__int128 *, __int64, void **, int *); // rax
  void (__fastcall *v9)(void **, __int64, void **); // rcx
  void *v10; // rdx
  size_t v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rbp
  int v19; // eax
  volatile signed __int32 *v20; // rbx
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  _BYTE *v24; // rdi
  _BYTE *v25; // rcx
  int v26; // eax
  size_t v27; // rdx
  int v28; // eax
  signed __int32 v29; // eax
  _BYTE *v30; // [rsp+8h] [rbp-130h] BYREF
  void *src; // [rsp+10h] [rbp-128h]
  __int64 v32; // [rsp+18h] [rbp-120h]
  unsigned int v33; // [rsp+20h] [rbp-118h]
  unsigned int v34; // [rsp+24h] [rbp-114h]
  unsigned int v35; // [rsp+28h] [rbp-110h]
  int v36; // [rsp+2Ch] [rbp-10Ch]
  int v37; // [rsp+30h] [rbp-108h]
  unsigned int v38; // [rsp+34h] [rbp-104h]
  _BYTE *v39; // [rsp+38h] [rbp-100h]
  int v40; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-F0h]
  __int128 v42; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v43; // [rsp+60h] [rbp-D8h] BYREF
  void *v44; // [rsp+70h] [rbp-C8h] BYREF
  size_t n; // [rsp+78h] [rbp-C0h]
  _BYTE *v46; // [rsp+80h] [rbp-B8h] BYREF
  __int16 v47; // [rsp+90h] [rbp-A8h]
  void *v48[2]; // [rsp+A0h] [rbp-98h] BYREF
  _WORD v49[36]; // [rsp+B0h] [rbp-88h] BYREF
  char v50; // [rsp+F8h] [rbp-40h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v39 = (_BYTE *)(a1 + 16);
  v40 = 0;
  v41 = std::_V2::system_category((std::_V2 *)a1);
  v8 = *(void (__fastcall **)(__int128 *, __int64, void **, int *))(*(_QWORD *)a2 + 64LL);
  v48[0] = a3;
  v49[8] = 261;
  v48[1] = a4;
  v8(&v42, a2, v48, &v40);
  v38 = 0;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  src = &v46;
  while ( !v40 && (_QWORD)v42 )
  {
    v9 = *(void (__fastcall **)(void **, __int64, void **))(*(_QWORD *)a2 + 40LL);
    v10 = *(void **)(v42 + 8);
    v11 = *(_QWORD *)(v42 + 16);
    v47 = 261;
    v44 = v10;
    n = v11;
    v9(v48, a2, &v44);
    if ( (v50 & 1) == 0 )
    {
      if ( !sub_225AED0((__int64)v48) )
        goto LABEL_9;
      v12 = (_BYTE *)sub_228AA60(*(_QWORD *)(v42 + 8), *(_QWORD *)(v42 + 16), 0);
      v32 = v13;
      v43 = 0;
      v30 = v12;
      if ( (unsigned __int8)sub_22578D0((__int64)&v43, v12, v13) )
        goto LABEL_9;
      v14 = v43;
      v15 = DWORD2(v43) & 0x7FFFFFFF;
      v16 = DWORD1(v43) & 0x7FFFFFFF;
      v36 = HIDWORD(v43) & 0x7FFFFFFF;
      v37 = DWORD2(v43) & 0x7FFFFFFF;
      if ( (unsigned int)v43 <= v33
        && ((_DWORD)v43 != v33
         || v16 <= v34 && (v16 != v34 || v15 <= v35 && (v15 != v35 || (HIDWORD(v43) & 0x7FFFFFFFu) <= v38))) )
      {
        goto LABEL_9;
      }
      if ( v30 )
      {
        v22 = v30;
        v33 = v43;
        v23 = (__int64)&v30[v32];
        LODWORD(v30) = DWORD1(v43) & 0x7FFFFFFF;
        v44 = src;
        sub_22C9310(&v44, v22, v23);
        v24 = *(_BYTE **)a1;
        v16 = (unsigned int)v30;
        v14 = v33;
        if ( v44 != src )
        {
          if ( v39 == v24 )
          {
            v30 = v46;
            *(_QWORD *)a1 = v44;
            *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v30);
          }
          else
          {
            v30 = v46;
            v25 = *(_BYTE **)(a1 + 16);
            *(_QWORD *)a1 = v44;
            *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v30);
            if ( v24 )
            {
              v44 = v24;
              v46 = v25;
              goto LABEL_34;
            }
          }
          v44 = src;
          v24 = src;
LABEL_34:
          n = 0;
          *v24 = 0;
          if ( v44 != src )
          {
            v33 = v14;
            LODWORD(v30) = v16;
            operator delete(v44);
            v14 = v33;
            v16 = (unsigned int)v30;
          }
          v34 = v16;
          v33 = v14;
          v38 = v36;
          v35 = v37;
LABEL_9:
          if ( (v50 & 1) == 0 && v48[0] != v49 )
            operator delete(v48[0]);
          goto LABEL_12;
        }
        v27 = n;
        if ( n )
        {
          if ( n == 1 )
          {
            *v24 = (_BYTE)v46;
            v27 = n;
            v24 = *(_BYTE **)a1;
          }
          else
          {
            memcpy(v24, src, n);
            v27 = n;
            v24 = *(_BYTE **)a1;
            v14 = v33;
            v16 = (unsigned int)v30;
          }
        }
      }
      else
      {
        v24 = *(_BYTE **)a1;
        LOBYTE(v46) = 0;
        v27 = 0;
        v44 = src;
      }
      *(_QWORD *)(a1 + 8) = v27;
      v24[v27] = 0;
      v24 = v44;
      goto LABEL_34;
    }
LABEL_12:
    v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 16LL))(v42);
    v41 = v17;
    if ( !*(_QWORD *)(v42 + 16) )
    {
      v18 = *((volatile signed __int32 **)&v42 + 1);
      v42 = 0;
      if ( v18 )
      {
        if ( &_pthread_key_create )
        {
          if ( !_InterlockedSub(v18 + 2, 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
            if ( !&_pthread_key_create )
              goto LABEL_37;
LABEL_17:
            if ( !_InterlockedSub(v18 + 3, 1u) )
              goto LABEL_18;
          }
        }
        else
        {
          v19 = *((_DWORD *)v18 + 2);
          *((_DWORD *)v18 + 2) = v19 - 1;
          if ( v19 == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
            if ( &_pthread_key_create )
              goto LABEL_17;
LABEL_37:
            v26 = *((_DWORD *)v18 + 3);
            *((_DWORD *)v18 + 3) = v26 - 1;
            if ( v26 == 1 )
LABEL_18:
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
          }
        }
      }
    }
  }
  v20 = *((volatile signed __int32 **)&v42 + 1);
  if ( *((_QWORD *)&v42 + 1) )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) != 1 )
        return a1;
    }
    else
    {
      v28 = *(_DWORD *)(*((_QWORD *)&v42 + 1) + 8LL);
      *(_DWORD *)(*((_QWORD *)&v42 + 1) + 8LL) = v28 - 1;
      if ( v28 != 1 )
        return a1;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( &_pthread_key_create )
    {
      v29 = _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
    }
    else
    {
      v29 = *((_DWORD *)v20 + 3);
      *((_DWORD *)v20 + 3) = v29 - 1;
    }
    if ( v29 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
  }
  return a1;
}
