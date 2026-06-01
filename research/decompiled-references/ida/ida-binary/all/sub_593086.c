_BOOL8 __fastcall sub_593086(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(_BYTE *, __int64, __int64),
        __int64 a5)
{
  __int64 v5; // rax
  _BOOL4 v6; // ebx
  _BYTE v10[112]; // [rsp+20h] [rbp-70h] BYREF

  sub_5931B2(v10, a3);
  sub_595F5E(v10);
  v5 = sub_5932A0(v10);
  v6 = (unsigned __int8)sub_5A3C9C(v5, a1, a2) == 1 && (!a4 || a4(v10, a5, 1));
  sub_593670(v10);
  return v6;
}
