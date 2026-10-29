__int64 __fastcall sub_215E950(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v6; // rax
  char v7; // dl
  unsigned __int64 v9; // rdi
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = (unsigned int)a3[5];
  if ( (_DWORD)v6 )
  {
    v9 = a2[2];
    v4 = (unsigned int)a3[4];
    v10 = __CFADD__(v9, v6);
    v11 = v9 + v6;
    v12 = v11;
    if ( (a2[8] || a2[9]) && v9 )
    {
      if ( a3[2] <= (unsigned int)v4 )
        LODWORD(v4) = a3[2];
      v4 = (unsigned int)v4;
    }
    v13 = v4 + v11;
    if ( __CFADD__(v4, v11) || __CFADD__(v4, v11) || (v9 += a2[3], v13 > v9) || v10 )
    {
      v14 = sub_2195B10(v9, a2, v13, v10);
      sub_2220500(v15, 4, v14);
      if ( v15[0] )
      {
        *(_QWORD *)a1 = v15[0];
        v7 = 1;
        goto LABEL_3;
      }
    }
    v3 = v12;
  }
  *(_QWORD *)a1 = v3;
  v7 = 0;
  *(_QWORD *)(a1 + 8) = v4;
LABEL_3:
  *(_BYTE *)(a1 + 16) = v7 | *(_BYTE *)(a1 + 16) & 0xFE;
  return a1;
}
