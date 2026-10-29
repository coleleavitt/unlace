std::_V2 *__fastcall sub_22A8DB0(std::_V2 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  void *v7[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD v9[4]; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+40h] [rbp-B8h]
  _QWORD v11[4]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v12; // [rsp+70h] [rbp-88h]
  _QWORD v13[4]; // [rsp+80h] [rbp-78h] BYREF
  __int16 v14; // [rsp+A0h] [rbp-58h]
  _QWORD *v15[4]; // [rsp+B0h] [rbp-48h] BYREF
  __int16 v16; // [rsp+D0h] [rbp-28h]

  v10 = 1283;
  v9[0] = "'";
  v11[0] = v9;
  v11[2] = "' and '";
  v13[0] = v11;
  v9[2] = a2;
  v9[3] = a3;
  v13[2] = a4;
  v15[0] = v13;
  v12 = 770;
  v13[3] = a5;
  v14 = 1282;
  v16 = 770;
  v15[2] = "' extensions are incompatible";
  v5 = std::_V2::generic_category(a1);
  sub_2253560(v7, v15);
  sub_22205D0(a1, (__int64)v7, 22, v5);
  if ( v7[0] != &v8 )
    operator delete(v7[0]);
  return a1;
}
