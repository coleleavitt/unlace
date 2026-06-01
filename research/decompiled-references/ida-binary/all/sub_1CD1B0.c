__int64 (__fastcall **__fastcall sub_1CD1B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5))()
{
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *(_QWORD *)(a1 + 48) = 0;
  }
  *(_DWORD *)(a1 + 8) = a2;
  switch ( (_DWORD)a2 )
  {
    case 1:
      v12 = (_QWORD *)operator new(0x20u);
      v12[1] = 0;
      v8 = v12;
      v12[2] = 0;
      v12[3] = 0;
      result = registry_persistent_t___vtable;
      *v8 = registry_persistent_t___vtable;
      goto LABEL_7;
    case 2:
      v11 = (_QWORD *)operator new(0x28u);
      v11[1] = 0;
      v8 = v11;
      v11[2] = 0;
      v11[3] = 0;
      result = database_persistent_t___vtable;
      *v8 = database_persistent_t___vtable;
      v8[4] = -1;
      goto LABEL_7;
    case 0:
      v7 = (_QWORD *)operator new(0x20u);
      v7[1] = 0;
      v8 = v7;
      v7[2] = 0;
      v7[3] = 0;
      result = dummy_persistent_t___vtable;
      *v8 = dummy_persistent_t___vtable;
LABEL_7:
      *(_QWORD *)(a1 + 48) = v8;
      if ( v8 )
      {
        result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD *))*v8)(v8);
        if ( !(_BYTE)result )
        {
          v10 = *(_QWORD *)(a1 + 48);
          if ( v10 )
            result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          *(_QWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 8) = 0;
        }
      }
      return result;
  }
  if ( under_debugger )
    BUG();
  interr(40401, a2, a3, a4, a5);
  return (__int64 (__fastcall **)())sub_1CD2F0();
}
