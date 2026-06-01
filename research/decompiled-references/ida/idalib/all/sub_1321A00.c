void __fastcall sub_1321A00(__int64 a1, __int64 a2, int *a3, _BYTE *a4, size_t a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-90h] BYREF
  void *v13[2]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v14[120]; // [rsp+20h] [rbp-78h] BYREF

  *a3 = a6;
  sub_D8B070(v13, (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf, 16, (__int64)"%u", a6);
  v9 = sub_13217C0(a1, a4, a5, (_BYTE *)v13[0], (__int64)v13[1]);
  if ( (unsigned __int8)sub_2247970(v9, v10, 0, &v12) )
  {
    v11 = v13[0];
    if ( v13[0] == v14 )
    {
LABEL_5:
      if ( a2 )
      {
        sub_FC70B0((__int64)v13, a2, 0, 304);
        sub_AEC220((unsigned __int8 **)v13, a4, a5);
        sub_12FA2D0((unsigned __int8 **)v13, (__int64)"an unsigned");
        sub_AEA040((__int64)v13);
      }
      return;
    }
LABEL_4:
    operator delete(v11);
    goto LABEL_5;
  }
  v11 = v13[0];
  if ( v12 != (unsigned int)v12 )
  {
    if ( v13[0] == v14 )
      goto LABEL_5;
    goto LABEL_4;
  }
  *a3 = v12;
  if ( v11 != v14 )
    operator delete(v11);
}
