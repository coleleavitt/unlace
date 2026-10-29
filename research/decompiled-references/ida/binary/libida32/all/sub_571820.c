__int64 __fastcall sub_571820(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, char a5)
{
  int idcv_attr; // eax
  unsigned int v8; // ebp
  int v10; // eax
  int v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12[2]; // [rsp+8h] [rbp-60h]
  int v13[2]; // [rsp+18h] [rbp-50h]
  void *ptr; // [rsp+28h] [rbp-40h]

  ptr = (void *)__readfsqword(0x28u);
  LOBYTE(v11) = 2;
  *(_QWORD *)v13 = 0;
  *(_OWORD *)v12 = 0;
  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    goto LABEL_3;
  idcv_attr = get_idcv_attr();
  *(_DWORD *)(a1 + 48) = idcv_attr;
  if ( !idcv_attr )
    goto LABEL_3;
  if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
  {
    v8 = -1;
    goto LABEL_6;
  }
  if ( a5 )
  {
    v8 = 0;
  }
  else
  {
LABEL_3:
    v8 = sub_5712E0(a1, &v11, a3, *(_DWORD *)(a1 + 16) + (unsigned int)(a2 >> 3), a2 & 7);
    if ( !v8 )
    {
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      {
        v8 = 0;
      }
      else
      {
        v10 = set_idcv_attr();
        *(_DWORD *)(a1 + 48) = v10;
        v8 = -(v10 != 0);
      }
    }
  }
LABEL_6:
  free_idcv(&v11);
  return v8;
}

