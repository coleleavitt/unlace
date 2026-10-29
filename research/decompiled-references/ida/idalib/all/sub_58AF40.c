__int64 __fastcall sub_58AF40(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, char a5)
{
  int idcv_attr; // eax
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // eax
  int v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15[2]; // [rsp+8h] [rbp-60h]
  int v16[2]; // [rsp+18h] [rbp-50h]
  void *ptr; // [rsp+28h] [rbp-40h]

  ptr = (void *)__readfsqword(0x28u);
  LOBYTE(v14) = 2;
  *(_QWORD *)v16 = 0;
  *(_OWORD *)v15 = 0;
  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    goto LABEL_3;
  idcv_attr = get_idcv_attr(&v14, *(_QWORD *)(a1 + 8), a4, 1);
  *(_DWORD *)(a1 + 48) = idcv_attr;
  if ( !idcv_attr )
    goto LABEL_3;
  if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
  {
    v9 = -1;
    goto LABEL_6;
  }
  if ( a5 )
  {
    v9 = 0;
  }
  else
  {
LABEL_3:
    v9 = sub_58A9F0(a1, &v14, a3, *(_QWORD *)(a1 + 16) + (a2 >> 3), a2 & 7);
    if ( !v9 )
    {
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      {
        v9 = 0;
      }
      else
      {
        v13 = set_idcv_attr(*(_QWORD *)(a1 + 8), a4, &v14, 1, v10, v11);
        *(_DWORD *)(a1 + 48) = v13;
        v9 = -(v13 != 0);
      }
    }
  }
LABEL_6:
  free_idcv(&v14);
  return v9;
}
