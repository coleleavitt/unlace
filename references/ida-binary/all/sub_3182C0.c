__int64 __fastcall sub_3182C0(int a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int16 v4; // r12
  __int64 v5; // rdx
  _BOOL4 v6; // ebp
  __int16 v7; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a1 == -1 || a1 == 20 )
  {
    (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 20, &v7);
    v3 = v7 & 1;
    v4 = v7 & 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 30, v7 & 1);
    v5 = v3;
    v6 = 0;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, 22, v5);
    if ( v4 )
      v6 = (v7 & 2) != 0;
    (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a2 + 16LL))(a2, 23, v6);
    (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a2 + 16LL))(a2, 31, v6);
  }
  return 1;
}
