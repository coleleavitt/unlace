__int64 __fastcall sub_891F30(__int64 a1)
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
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  time_t v19; // r14
  int v20; // r12d
  time_t v21; // rax
  void *v22; // rdi
  time_t v23; // r12
  void *v24; // [rsp+0h] [rbp-F0h] BYREF
  __int128 v25; // [rsp+8h] [rbp-E8h]
  void *v26; // [rsp+20h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+28h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-B0h] BYREF
  void *v29[2]; // [rsp+48h] [rbp-A8h]
  __int64 v30; // [rsp+58h] [rbp-98h]
  void **v31; // [rsp+60h] [rbp-90h]
  __int64 v32; // [rsp+68h] [rbp-88h]
  int v33; // [rsp+70h] [rbp-80h] BYREF
  __int16 v34; // [rsp+74h] [rbp-7Ch]
  __int64 v35; // [rsp+78h] [rbp-78h]
  int v36; // [rsp+80h] [rbp-70h]
  int v37; // [rsp+84h] [rbp-6Ch]
  _BYTE v38[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  LODWORD(v2) = sub_8898E0();
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
  v24 = nullptr;
  v25 = 0;
  if ( !v5 )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 352) )
  {
    v6 = 0;
    if ( *(_BYTE *)(a1 + 504) )
      goto LABEL_7;
    v8 = *(_DWORD *)(a1 + 200);
    v2 = (int)v2;
    v37 = 0;
    v33 = v8;
    v34 = *(_WORD *)(a1 + 204);
    v35 = *(_QWORD *)(a1 + 212);
    v36 = *(_DWORD *)(a1 + 220);
    if ( (unsigned int)sub_88C690(a1, nullptr, (__int64)&v33, (int)v2) != 1 )
    {
      v29[0] = nullptr;
      ptr = off_2B13308;
      v31 = &v24;
      v32 = a1 + 200;
      v29[1] = nullptr;
      v30 = a1;
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
  v37 = 0;
  v33 = v11;
  v34 = *(_WORD *)(a1 + 204);
  v35 = *(_QWORD *)(a1 + 212);
  v36 = *(_DWORD *)(a1 + 220);
  if ( (unsigned int)sub_88C690(a1, nullptr, (__int64)&v33, v2) == 1 )
  {
    ptr = nullptr;
    *(_OWORD *)v29 = 0;
    sub_3573A0((char **)&ptr);
    sub_365330();
  }
  if ( !*(_DWORD *)(a1 + 208) )
    goto LABEL_3;
LABEL_16:
  if ( !*(_BYTE *)(a1 + 352) )
  {
    v4 = *(_QWORD *)(a1 + 432) == 0;
    v26 = nullptr;
    v27 = 0;
    if ( v4 )
    {
      sub_8919F0((__int64)&ptr, a1 + 40, 0);
      sub_3573A0((char **)&v26);
      if ( ptr )
      {
        v29[0] = nullptr;
        qfree(ptr);
      }
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 200);
      ptr = nullptr;
      v33 = v12;
      LOWORD(v12) = *(_WORD *)(a1 + 204);
      *(_OWORD *)v29 = 0;
      v34 = v12;
      ptr = (void *)qvector_reserve(&ptr, 0, 1, 6);
      v13 = (char *)ptr + 6 * (__int64)v29[0];
      *(_DWORD *)v13 = v33;
      *((_WORD *)v13 + 2) = v34;
      v14 = *(_QWORD *)(a1 + 432);
      ++v29[0];
      if ( (unsigned int)sub_7EF8F0(v14, (__int64)&ptr, (__int64)&v24, v15, v16, v17) )
        sub_3573A0((char **)&v26);
      if ( ptr )
      {
        v29[0] = nullptr;
        qfree(ptr);
      }
    }
    if ( (unsigned __int64)v27 > 1 )
    {
      v18 = sub_88BFE0(a1);
      v19 = *(_QWORD *)(a1 + 488);
      v20 = v18;
      v21 = sub_8898E0();
      v22 = v26;
      if ( v20 == 1 && v19 <= v21 )
      {
        if ( !*(_BYTE *)(a1 + 504) )
        {
          *(_BYTE *)(a1 + 568) = 1;
          if ( v22 )
          {
            *(_QWORD *)&v27 = 0;
            qfree(v22);
          }
          v6 = 1;
          goto LABEL_5;
        }
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26);
        }
      }
      else
      {
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree(v26);
        }
        if ( v20 == 2 )
          goto LABEL_3;
      }
      v23 = *(_QWORD *)(a1 + 488);
      if ( v23 > sub_8898E0() )
      {
        (*(void (__fastcall **)(__int64, _BYTE *, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(
          a1,
          v38,
          25,
          *(_QWORD *)(a1 + 488),
          0);
        sub_8919F0((__int64)&ptr, a1 + 40, 0);
        sub_365330();
      }
      *(_BYTE *)(a1 + 504) = 1;
      goto LABEL_4;
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
LABEL_3:
  sub_889490(a1);
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 560) = 0;
LABEL_4:
  v6 = 0;
LABEL_5:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
LABEL_7:
  qmutex_unlock(v3);
  return v6;
}

