__int64 __fastcall sub_7577A0(unsigned int *a1, char a2, void (*a3)())
{
  __int64 v3; // rax
  unsigned int v4; // r13d
  unsigned int i; // r14d
  unsigned int v6; // eax
  void (*v7)(); // rax
  __int64 v8; // r12
  int v9; // eax
  void (*v10)(); // rcx
  void (*v11)(); // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64); // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = 0;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v12 = -1;
    goto LABEL_18;
  }
  v4 = 0;
  for ( i = 0; ; i += 0x10000 )
  {
    v8 = 176 * v3 + *((_QWORD *)a1 + 6);
    if ( a2 )
      goto LABEL_3;
    sub_757350((__int64)a1, -1171354717 * ((176 * v3) >> 4), 176 * v3 + *((_QWORD *)a1 + 6), nullptr);
    v9 = *(_DWORD *)(v8 + 164);
    if ( (v9 & 1) == 0 )
      goto LABEL_7;
    v6 = v9 & 0xFFFFFFFE;
    *(_DWORD *)(v8 + 164) = v6;
    v10 = *(void (**)())(*(_QWORD *)a1 + 152LL);
    if ( v10 != nullsub_219 )
    {
      ((void (__fastcall *)(unsigned int *, _QWORD))v10)(a1, v4);
LABEL_3:
      v6 = *(_DWORD *)(v8 + 164);
    }
    if ( (v6 & 2) != 0 )
    {
      v7 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v7 != nullsub_211 )
        ((void (__fastcall *)(unsigned int *, _QWORD))v7)(a1, i);
    }
    else
    {
      ptr = nullptr;
      v17 = 0;
      sub_754F50((__int64 *)&ptr, v8);
      v11 = *(void (**)())(*(_QWORD *)a1 + 24LL);
      if ( v11 != nullsub_212 )
        ((void (__fastcall *)(unsigned int *, _QWORD, void **))v11)(a1, i, &ptr);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
    }
LABEL_7:
    a3 = (void (*)())(i + 0x10000);
    v3 = ++v4;
    if ( (unsigned __int64)v4 >= *((_QWORD *)a1 + 7) )
      break;
  }
  v12 = i + 0xFFFF;
LABEL_18:
  v13 = *(_QWORD *)a1;
LABEL_19:
  v14 = *(__int64 (__fastcall **)(__int64))(v13 + 48);
  if ( v14 == sub_753090 )
  {
LABEL_20:
    v12 = a1[34];
    if ( v12 != -1 )
      goto LABEL_21;
  }
  else
  {
    while ( 1 )
    {
      v12 = ((__int64 (__fastcall *)(unsigned int *, _QWORD, void (*)()))v14)(a1, v12, a3);
      if ( v12 == -1 )
        break;
LABEL_21:
      v13 = *(_QWORD *)a1;
      a3 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( a3 == nullsub_211 )
        goto LABEL_19;
      ((void (__fastcall *)(unsigned int *, _QWORD))a3)(a1, v12);
      v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL);
      if ( v14 == sub_753090 )
        goto LABEL_20;
    }
  }
  return 1;
}

