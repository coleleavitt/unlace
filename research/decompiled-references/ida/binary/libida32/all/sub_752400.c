_BYTE *__fastcall sub_752400(unsigned int a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // r9d
  int v4; // eax
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  _BYTE *v11; // rcx
  __int64 v13; // rdx
  __int16 v14; // si
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *result; // rax
  _BYTE *v18; // r8
  int v19; // r11d
  __int64 v20; // rsi
  __int64 i; // rcx
  __int64 v22; // rax
  int v23; // r9d
  _DWORD *v24; // rcx

  v3 = dword_2CAA4F0;
  v4 = dword_2CAA4F0 - 1;
  dword_2CAA4F0 = v4;
  if ( v4 < 0 )
    goto LABEL_25;
  v7 = (unsigned int)v4 + 125LL;
  v9 = 7;
  v10 = 16 * v7;
  v11 = &byte_2CA2EE0[v10];
  *(_QWORD *)v11 = "operator";
  *((_DWORD *)v11 + 2) = 0x80000;
  do
    v11[v9] = aConditionalOpe[v9 + 12];
  while ( v9-- != 0 );
  v13 = (unsigned int)(v3 - 2);
  if ( a1 )
  {
    v14 = 4;
    if ( a1 <= 0xFFFFFF )
    {
      v14 = 3;
      if ( a1 <= 0xFFFF )
        v14 = (a1 > 0xFF) + 1;
    }
    dword_2CAA4F0 = v3 - 2;
    if ( v3 == 1 )
      goto LABEL_25;
    v15 = 16 * (v13 + 125);
    v16 = &byte_2CA2EE0[v15];
    *(_DWORD *)v16 = a1;
    *((_WORD *)v16 + 4) = 0;
    *((_WORD *)v16 + 5) = v14;
  }
  else
  {
    dword_2CAA4F0 = v3 - 2;
    if ( v3 == 1 )
      goto LABEL_25;
    v15 = 16 * (v13 + 125);
    v18 = &byte_2CA2EE0[v15];
    *(_QWORD *)v18 = a2;
    *((_WORD *)v18 + 4) = 0;
    *((_WORD *)v18 + 5) = a3;
    if ( a3 <= 8u )
    {
      v19 = a3 - 1;
      v20 = v19;
      for ( i = v19 - 1LL; ; --i )
      {
        v18[v20] = *(_BYTE *)(a2 + v20);
        v20 = i;
        if ( v19 - 1LL - (unsigned int)v19 == i )
          break;
      }
      if ( !(_WORD)v15 )
        return (_BYTE *)(unsigned __int16)v10;
      goto LABEL_18;
    }
  }
  if ( !(_WORD)v15 )
    return (_BYTE *)(unsigned __int16)v10;
LABEL_18:
  if ( (_WORD)v10 )
  {
    v22 = (unsigned int)(v3 - 3);
    if ( v3 == 2 )
    {
      dword_2CAA4F0 = -1;
    }
    else
    {
      v23 = v3 - 4;
      dword_2CAA4F0 = v23;
      result = &byte_2CA2EE0[16 * v22 + 2000];
      if ( v23 != -1 )
      {
        v24 = &byte_2CA2EE0[16 * v23 + 2000];
        *v24 = 0;
        *(_WORD *)v24 = v10;
        *(_QWORD *)result = v24;
        *((_WORD *)result + 5) = 0;
        *((_WORD *)result + 4) = v15;
        LOWORD(result) = (_WORD)result - (unsigned __int16)byte_2CA2EE0;
        return (_BYTE *)(unsigned __int16)result;
      }
    }
LABEL_25:
    __longjmp_chk();
  }
  LOWORD(result) = v15;
  return (_BYTE *)(unsigned __int16)result;
}

