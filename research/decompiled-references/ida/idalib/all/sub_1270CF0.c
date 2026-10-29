__int64 __fastcall sub_1270CF0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edx
  _QWORD v7[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v8; // [rsp+20h] [rbp-E8h]
  __int64 v9; // [rsp+28h] [rbp-E0h]
  __int16 v10; // [rsp+30h] [rbp-D8h]
  _QWORD v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  char *v12; // [rsp+50h] [rbp-B8h]
  __int16 v13; // [rsp+60h] [rbp-A8h]
  _QWORD v14[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+80h] [rbp-88h]
  __int64 v16; // [rsp+88h] [rbp-80h]
  __int16 v17; // [rsp+90h] [rbp-78h]
  _QWORD v18[2]; // [rsp+A0h] [rbp-68h] BYREF
  const char *v19; // [rsp+B0h] [rbp-58h]
  __int16 v20; // [rsp+C0h] [rbp-48h]

  v1 = sub_228ACC0(0);
  v8 = v1;
  v10 = 1284;
  v12 = "include";
  v3 = v2;
  v9 = v2;
  v16 = v2;
  v7[0] = a1;
  v11[0] = v7;
  v13 = 770;
  v14[0] = v11;
  v15 = v1;
  v17 = 1282;
  v18[0] = v14;
  v19 = "_mingw.h";
  v20 = 770;
  v4 = sub_228C1E0(v18, 0);
  v5 = 0;
  if ( !v4 )
  {
    v10 = 1284;
    v11[0] = v7;
    v12 = "lib";
    v20 = 770;
    v13 = 770;
    v7[0] = a1;
    v8 = v1;
    v9 = v3;
    v14[0] = v11;
    v15 = v1;
    v16 = v3;
    v17 = 1282;
    v18[0] = v14;
    v19 = "libkernel32.a";
    LOBYTE(v5) = (unsigned int)sub_228C1E0(v18, 0) == 0;
  }
  return v5;
}
