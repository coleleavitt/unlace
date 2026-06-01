__int64 __fastcall sub_8B58B0(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r13
  bool v4; // zf
  int v5; // eax
  unsigned int v6; // r12d
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  time_t v16; // r14
  int v17; // r12d
  time_t v18; // rax
  void *v19; // rdi
  time_t v20; // r12
  void *v21; // [rsp+0h] [rbp-F0h] BYREF
  __int128 v22; // [rsp+8h] [rbp-E8h]
  void *v23; // [rsp+20h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+28h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-B0h] BYREF
  void *v26[2]; // [rsp+48h] [rbp-A8h]
  __int64 v27; // [rsp+58h] [rbp-98h]
  void **v28; // [rsp+60h] [rbp-90h]
  __int64 v29; // [rsp+68h] [rbp-88h]
  int v30; // [rsp+70h] [rbp-80h] BYREF
  __int16 v31; // [rsp+74h] [rbp-7Ch]
  __int64 v32; // [rsp+78h] [rbp-78h]
  int v33; // [rsp+80h] [rbp-70h]
  int v34; // [rsp+84h] [rbp-6Ch]
  _BYTE v35[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+B8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  LODWORD(v2) = sub_8AD250();
  v3 = *(_QWORD *)(a1 + 424);
  qmutex_lock(v3);
  v4 = *(_BYTE *)(a1 + 72) == 0;
  *(_BYTE *)(a1 + 568) = 0;
  if ( v4 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v5 = *(_DWORD *)(a1 + 208);
  v21 = nullptr;
  v22 = 0;
  if ( !v5 )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 352) )
  {
    v6 = 0;
    if ( *(_BYTE *)(a1 + 504) )
      goto LABEL_7;
    v8 = *(_DWORD *)(a1 + 200);
    v2 = (int)v2;
    v34 = 0;
    v30 = v8;
    v31 = *(_WORD *)(a1 + 204);
    v32 = *(_QWORD *)(a1 + 212);
    v33 = *(_DWORD *)(a1 + 220);
    if ( (unsigned int)sub_8B0010(a1, nullptr, (__int64)&v30, (int)v2) != 1 )
    {
      v26[0] = nullptr;
      ptr = off_2B3D2A8;
      v28 = &v21;
      v29 = a1 + 200;
      v26[1] = nullptr;
      v27 = a1;
      callui(86, (int)&ptr, 0, (int)&callui, v9, v10);
    }
    if ( !*(_DWORD *)(a1 + 208) )
      goto LABEL_3;
    if ( *(_BYTE *)(a1 + 352) )
      goto LABEL_16;
  }
  else
  {
    v2 = (int)v2;
  }
  v11 = *(_DWORD *)(a1 + 200);
  v34 = 0;
  v30 = v11;
  v31 = *(_WORD *)(a1 + 204);
  v32 = *(_QWORD *)(a1 + 212);
  v33 = *(_DWORD *)(a1 + 220);
  if ( (unsigned int)sub_8B0010(a1, nullptr, (__int64)&v30, v2) == 1 )
  {
    ptr = nullptr;
    *(_OWORD *)v26 = 0;
    sub_35A790((char **)&ptr);
    sub_368890();
  }
  if ( !*(_DWORD *)(a1 + 208) )
    goto LABEL_3;
LABEL_16:
  if ( !*(_BYTE *)(a1 + 352) )
  {
    v4 = *(_QWORD *)(a1 + 432) == 0;
    v23 = nullptr;
    v24 = 0;
    if ( v4 )
    {
      sub_8B5370((__int64)&ptr, a1 + 40, 0);
      sub_35A790((char **)&v23);
      if ( ptr )
      {
        v26[0] = nullptr;
        qfree(ptr);
      }
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 200);
      ptr = nullptr;
      v30 = v12;
      LOWORD(v12) = *(_WORD *)(a1 + 204);
      *(_OWORD *)v26 = 0;
      v31 = v12;
      ptr = (void *)qvector_reserve(&ptr, 0, 1, 6);
      v13 = (char *)ptr + 6 * (__int64)v26[0];
      *(_DWORD *)v13 = v30;
      *((_WORD *)v13 + 2) = v31;
      v14 = *(_QWORD *)(a1 + 432);
      ++v26[0];
      if ( (unsigned int)sub_812AB0(v14, (__int64)&ptr, (__int64)&v21) )
        sub_35A790((char **)&v23);
      if ( ptr )
      {
        v26[0] = nullptr;
        qfree(ptr);
      }
    }
    if ( (unsigned __int64)v24 > 1 )
    {
      v15 = sub_8AF960(a1);
      v16 = *(_QWORD *)(a1 + 488);
      v17 = v15;
      v18 = sub_8AD250();
      v19 = v23;
      if ( v17 == 1 && v16 <= v18 )
      {
        if ( !*(_BYTE *)(a1 + 504) )
        {
          *(_BYTE *)(a1 + 568) = 1;
          if ( v19 )
          {
            *(_QWORD *)&v24 = 0;
            qfree(v19);
          }
          v6 = 1;
          goto LABEL_5;
        }
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
      }
      else
      {
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        if ( v17 == 2 )
          goto LABEL_3;
      }
      v20 = *(_QWORD *)(a1 + 488);
      if ( v20 > sub_8AD250() )
      {
        (*(void (__fastcall **)(__int64, _BYTE *, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(
          a1,
          v35,
          25,
          *(_QWORD *)(a1 + 488),
          0);
        sub_8B5370((__int64)&ptr, a1 + 40, 0);
        sub_368890();
      }
      *(_BYTE *)(a1 + 504) = 1;
      goto LABEL_4;
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
LABEL_3:
  sub_8ACE00(a1);
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 560) = 0;
LABEL_4:
  v6 = 0;
LABEL_5:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
LABEL_7:
  qmutex_unlock(v3);
  return v6;
}
