__int64 __fastcall sub_DF97A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  void *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned __int8 v9; // [rsp+Fh] [rbp-89h]
  char v10; // [rsp+1Bh] [rbp-7Dh] BYREF
  int v11; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *v12; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-70h]
  char v14; // [rsp+2Ch] [rbp-6Ch]
  void *v15; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-60h]
  char v17; // [rsp+3Ch] [rbp-5Ch]
  int v18; // [rsp+40h] [rbp-58h]
  void *v19; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-40h]
  char v21; // [rsp+5Ch] [rbp-3Ch]
  int v22; // [rsp+60h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = (void *)*(unsigned __int8 *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v13 = 8;
  v11 = sub_21EDE80(a3);
  v12 = v5;
  v14 = 1;
  sub_21F6EE0(&v19, &v12, &v11, &v10);
  v16 = v20;
  v15 = v19;
  v17 = v21;
  v18 = v22;
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( !v10 || (result = sub_DF81A0(a1, a2, (__int64)&v15), (_BYTE)result) )
  {
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
    v8 = v16;
    *(_DWORD *)(v7 + 8) = v16;
    if ( v8 > 0x40 )
      sub_2205510(v7);
    else
      *(_QWORD *)v7 = v15;
    *(_BYTE *)(v7 + 12) = v17;
    *(_DWORD *)(v7 + 16) = v18;
    result = 1;
  }
  if ( v16 > 0x40 )
  {
    if ( v15 )
    {
      v9 = result;
      operator delete[](v15);
      return v9;
    }
  }
  return result;
}
