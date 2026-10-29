__int64 __fastcall sub_5A3420(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  void **v9; // rax
  void (__fastcall ***v10)(_QWORD); // r15
  __int64 (__fastcall *v11)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  void *v14; // r12
  _QWORD *v15; // rbx
  __int64 result; // rax
  int v17; // eax
  _DWORD *v18; // rdi
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, __int64, __int64, unsigned int); // r8
  void *v22; // r12
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = 8 * v4;
      v6 = 0;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v3 + v6);
        if ( !v7 )
          goto LABEL_5;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 128LL))(v7, a2);
        v9 = (void **)(v6 + *(_QWORD *)(a1 + 112));
        v10 = (void (__fastcall ***)(_QWORD))*v9;
        *v9 = (void *)v8;
        v11 = (__int64 (__fastcall *)(void (__fastcall ***)(_QWORD)))(*v10)[2];
        if ( v11 == sub_4C9C10 )
          break;
        v11(v10);
        v6 += 8;
        if ( v5 == v6 )
          goto LABEL_10;
LABEL_6:
        v3 = *(_QWORD *)(a1 + 112);
      }
      (**v10)(v10);
      sub_186B220(v10);
LABEL_5:
      v6 += 8;
      if ( v5 == v6 )
        goto LABEL_10;
      goto LABEL_6;
    }
  }
LABEL_10:
  v12 = *(unsigned int *)(a1 + 128);
  if ( (_DWORD)v12 == -1 )
  {
    v17 = sub_5A1A80(a1);
    v18 = *(_DWORD **)(a1 + 88);
    v19 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = v17;
    v20 = *(_QWORD *)v18;
    v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)v18 + 72LL);
    if ( v21 == sub_4EA4F0 )
    {
      if ( v18[2] == v19 || v19 == -1 )
      {
        v23 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64))(v20 + 64))(v18, 0, a1 + 64);
      }
      else
      {
        v22 = (void *)(*(__int64 (__fastcall **)(_DWORD *, __int64))(v20 + 48))(v18, a1 + 64);
        v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v22 + 128LL))(v22, 0);
        v24 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v22 + 16LL);
        if ( v24 == sub_4C9C10 )
        {
          (**(void (__fastcall ***)(void *))v22)(v22);
          sub_186B220(v22);
        }
        else
        {
          v24((void (__fastcall ***)(_QWORD))v22);
        }
      }
    }
    else
    {
      v23 = v21((__int64)v18, 0, a1 + 64, v19);
    }
    v12 = *(unsigned int *)(a1 + 128);
    *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v12) = v23;
  }
  v13 = *(_QWORD *)(a1 + 104);
  v25[0] = v12;
  v14 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 128LL))(v13, a2, v25);
  v15 = sub_4C4B50(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), *(_QWORD *)(a1 + 104), (__int64)v14, 0);
  (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _QWORD))(*v15 + 16LL))(v15, *(_QWORD *)(a1 + 104), v14, 0);
  (*(void (__fastcall **)(_QWORD *))*v15)(v15);
  result = sub_186B220(v15);
  if ( v14 )
    return sub_4D63E0(v14);
  return result;
}

