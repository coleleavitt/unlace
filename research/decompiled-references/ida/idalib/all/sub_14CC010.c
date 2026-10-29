__int64 __fastcall sub_14CC010(_QWORD *a1, _DWORD **a2, int *a3, int a4)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax
  _DWORD *v9; // rdx
  __int64 v11; // rax
  _DWORD v12[2]; // [rsp+0h] [rbp-C8h] BYREF
  char v13; // [rsp+8h] [rbp-C0h]
  __int64 v14; // [rsp+Ch] [rbp-BCh]
  char v15; // [rsp+14h] [rbp-B4h]
  void *v16; // [rsp+18h] [rbp-B0h]
  __int64 v17; // [rsp+20h] [rbp-A8h]
  _BYTE v18[24]; // [rsp+28h] [rbp-A0h] BYREF
  unsigned __int8 *v19[17]; // [rsp+40h] [rbp-88h] BYREF

  v5 = *a1;
  v6 = *a3;
  v7 = *(unsigned int *)(*a1 + 16LL);
  if ( v6 )
  {
    sub_1564820(v19, *a1, v7, 1723);
    sub_AE9DF0(v19, a4, 2u);
    v11 = *a1;
    v13 = 1;
    LODWORD(v11) = *(_DWORD *)(v11 + 16);
    v15 = 0;
    v14 = 0;
    v16 = v18;
    v17 = 0;
    v18[0] = 0;
    v18[16] = 0;
    v12[0] = v11;
    v12[1] = v11;
    if ( (_DWORD)v11 )
    {
      sub_14C6E00((__int64 *)v19, (unsigned __int64)v12);
      if ( v16 != v18 )
        operator delete(v16);
    }
    sub_AEA040((__int64)v19);
    v5 = *a1;
    LODWORD(v7) = *(_DWORD *)(*a1 + 16LL);
  }
  *(_DWORD *)(v5 + 40) = v7;
  sub_14634E0(*(__int64 **)(v5 + 8), (int *)(v5 + 16));
  result = *(unsigned int *)(v5 + 40);
  v9 = *a2;
  *a3 = result;
  *v9 = result;
  return result;
}
