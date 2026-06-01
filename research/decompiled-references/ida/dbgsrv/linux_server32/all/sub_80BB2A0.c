/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BB2A0
// Address: 0x080BB2A0

//----- (080BB2A0) --------------------------------------------------------
int __fastcall sub_80BB2A0(int a1, int *a2)
{
  char v3; // dl
  int v4; // eax
  bool v5; // zf
  int *v6; // edx
  char v7; // bl
  int *v8; // eax
  int result; // eax
  int v10; // [esp+0h] [ebp-1Ch]

  v3 = sub_80BBFA0(a2[17]);
  v4 = a2[19];
  v5 = v3 == 0;
  v6 = &dword_80DDFD8;
  if ( v5 )
  {
    if ( v4 )
      v6 = (int *)a2[18];
    sub_80A69A0((int)a2, "Handshake with %s failed (timeout period %d ms)\n", v6, 10000);
    if ( a2[19] )
      sub_80A69A0((int)a2, "Closing connection from %s...\n", a2[18]);
    else
      sub_80A69A0((int)a2, "Closing connection from %s...\n", &dword_80DDFD8);
    return sub_80BB1D0(v10, (int)a2);
  }
  if ( v4 )
    v6 = (int *)a2[18];
  sub_80A69A0((int)a2, "Accepting connection from %s...\n", v6);
  v7 = (*(int (__cdecl **)(int *))(*a2 + 8))(a2);
  v8 = &dword_80DDFD8;
  if ( a2[19] )
    v8 = (int *)a2[18];
  result = sub_80A69A0((int)a2, "Closing connection from %s...\n", v8);
  if ( v7 )
    return sub_80BB1D0(v10, (int)a2);
  return result;
}
// 80BB36E: variable 'v10' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
