__int64 __fastcall sub_844250(_QWORD *a1, char a2, char a3, int a4)
{
  _BYTE *v6; // rax
  _BYTE *v7; // rdx
  _QWORD *v8; // rax

  if ( a2 )
  {
    v6 = sub_8441E0((__int64)a1, 7);
    if ( v6 )
    {
      *v6 = 6;
      v7 = v6 + 2;
      a1[15] += 6LL;
      v6[1] = a2;
LABEL_6:
      *v7 = a3;
      *(_DWORD *)(v7 + 1) = a4;
      return 0;
    }
  }
  else
  {
    v8 = sub_8441E0((__int64)a1, 6);
    if ( v8 )
    {
      *(_BYTE *)v8 = 5;
      v7 = (char *)v8 + 1;
      a1[15] += 5LL;
      goto LABEL_6;
    }
  }
  return *(unsigned int *)a1;
}

