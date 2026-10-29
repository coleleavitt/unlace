__int64 __fastcall sub_750FF0(unsigned __int16 a1, unsigned __int16 *a2)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 result; // rax
  _DWORD *v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rsi
  _BYTE *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  _DWORD *v11; // rdx

  v2 = dword_2CAA4F0;
  v3 = (unsigned int)(dword_2CAA4F0 - 1);
  dword_2CAA4F0 = v3;
  if ( (int)v3 < 0 )
    goto LABEL_10;
  result = 16 * (v3 + 125);
  v5 = &byte_2CA2EE0[result];
  v6 = (unsigned __int16)result;
  *v5 = a1;
  v5[2] = 0x20000;
  v7 = *a2;
  if ( !(_WORD)v7 )
    return (unsigned __int16)result;
  v8 = &byte_2CA2EE0[v7];
  if ( (_WORD)result )
  {
    v9 = (unsigned int)(v2 - 2);
    if ( v2 == 1 )
    {
      dword_2CAA4F0 = -1;
    }
    else
    {
      v10 = (unsigned int)(v2 - 3);
      dword_2CAA4F0 = v10;
      v8 = &byte_2CA2EE0[16 * v9 + 2000];
      if ( (_DWORD)v10 != -1 )
      {
        v11 = &byte_2CA2EE0[16 * v10 + 2000];
        *v11 = 0;
        *(_WORD *)v11 = result;
        *(_QWORD *)v8 = v11;
        *((_WORD *)v8 + 5) = 0;
        *((_WORD *)v8 + 4) = v7;
        goto LABEL_5;
      }
    }
LABEL_10:
    __longjmp_chk();
  }
LABEL_5:
  LOWORD(v6) = (_WORD)v8 - (unsigned __int16)byte_2CA2EE0;
  return v6;
}

