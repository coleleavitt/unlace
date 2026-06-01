__int64 __fastcall sub_1D81B40(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, __int64 a7)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r13
  _QWORD *v11; // rdi
  __int64 *v12; // r15
  int v13; // ebp
  int v14; // eax
  int v15; // r9d
  int v17; // [rsp+18h] [rbp-70h]
  _QWORD v19[6]; // [rsp+20h] [rbp-68h] BYREF
  char v20; // [rsp+50h] [rbp-38h] BYREF

  v8 = a5;
  v9 = a6;
  if ( v8 || !a4 )
  {
    v15 = a7;
    LODWORD(a1) = *a1;
  }
  else
  {
    v10 = a1;
    v11 = *(_QWORD **)(*a1 + 248);
    v12 = v19;
    v17 = a3;
    v19[0] = v11[2344];
    v19[1] = v11[2345];
    v19[2] = v11[2346];
    v19[3] = v11[2347];
    v19[4] = v11[2348];
    v19[5] = v11[2349];
    while ( 1 )
    {
      v13 = *(_DWORD *)(a4 + 8);
      if ( v13 == (unsigned int)sub_AAC1F0((__int64)v11, *v12, a3, v8, v9) )
        break;
      ++v12;
      v11 = *(_QWORD **)(*v10 + 248);
      if ( &v20 == (char *)v12 )
      {
        v14 = sub_C0C5D0(v11, a4, 0, a7);
        goto LABEL_7;
      }
    }
    v14 = sub_C0C5D0(*(_QWORD **)(*v10 + 248), a4, *v12, a7);
LABEL_7:
    a1 = (__int64 *)*v10;
    LODWORD(a3) = v17;
    v15 = a7;
    LODWORD(v9) = a6;
    LODWORD(v8) = v14;
  }
  return sub_1E66B60((_DWORD)a1, a2, a3, v8, v9, v15, 0);
}
