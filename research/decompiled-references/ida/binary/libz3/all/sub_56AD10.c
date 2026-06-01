bool __fastcall sub_56AD10(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  bool result; // al
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ecx
  _QWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  int v16; // edx
  bool v17; // [rsp+1h] [rbp-79h]
  bool v18; // [rsp+1h] [rbp-79h]
  void *v19[2]; // [rsp+2h] [rbp-78h] BYREF
  int v20; // [rsp+12h] [rbp-68h]
  void *v21[2]; // [rsp+22h] [rbp-58h] BYREF
  int v22; // [rsp+32h] [rbp-48h]

  result = 0;
  if ( a3 )
  {
    v9 = (_QWORD *)sub_186B270(0x80u);
    *v9 = 0;
    v9[2] = 0;
    v9[4] = 0;
    v9[6] = 0;
    v9[8] = 0;
    v9[10] = 0;
    v9[12] = 0;
    v9[14] = 0;
    v19[0] = v9;
    v19[1] = &byte_8;
    v20 = 0;
    v10 = sub_148B660(v19, a3, a4, 1);
    v11 = sub_148BAF0(v10);
    if ( *(_QWORD *)a1 )
      v12 = *(_DWORD *)(*(_QWORD *)a1 - 4LL);
    else
      v12 = 0;
    result = 1;
    if ( v11 < v12 - *(_DWORD *)(a1 + 8) )
    {
      v13 = (_QWORD *)sub_186B270(0x80u);
      *v13 = 0;
      v13[2] = 0;
      v13[4] = 0;
      v13[6] = 0;
      v13[8] = 0;
      v13[10] = 0;
      v13[12] = 0;
      v13[14] = 0;
      v21[0] = v13;
      v21[1] = &byte_8;
      v22 = 0;
      v14 = sub_148B660(v21, a3, a5, 1);
      v15 = sub_148BAF0(v14);
      if ( *(_QWORD *)a2 )
        v16 = *(_DWORD *)(*(_QWORD *)a2 - 4LL);
      else
        v16 = 0;
      result = v15 >= v16 - *(_DWORD *)(a2 + 8);
      if ( v21[0] )
      {
        v18 = result;
        sub_186B220(v21[0]);
        result = v18;
      }
    }
    if ( v19[0] )
    {
      v17 = result;
      sub_186B220(v19[0]);
      return v17;
    }
  }
  return result;
}

