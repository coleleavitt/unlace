__int64 __fastcall sub_750840(__int16 *a1)
{
  int v1; // ecx
  __int64 v2; // rax
  __int64 result; // rax
  _BYTE *v5; // rdx
  __int16 v6; // r9
  _BYTE *v7; // rdi
  __int64 v8; // rdi
  int v9; // ecx
  _DWORD *v10; // rdx

  v1 = dword_2CAA4F0;
  v2 = (unsigned int)(dword_2CAA4F0 - 1);
  dword_2CAA4F0 = v2;
  if ( (int)v2 < 0 )
    goto LABEL_10;
  result = 16 * (v2 + 125);
  v5 = &byte_2CA2EE0[result];
  *(_QWORD *)v5 = "`...'";
  *((_DWORD *)v5 + 2) = 327680;
  v5[4] = 39;
  *(_DWORD *)v5 = 774778464;
  if ( !(_WORD)result )
    return result;
  v6 = *a1;
  if ( *a1 )
  {
    v8 = (unsigned int)(v1 - 2);
    if ( v1 == 1 )
    {
      dword_2CAA4F0 = -1;
    }
    else
    {
      v9 = v1 - 3;
      dword_2CAA4F0 = v9;
      v7 = &byte_2CA2EE0[16 * v8 + 2000];
      if ( v9 != -1 )
      {
        v10 = &byte_2CA2EE0[16 * v9 + 2000];
        *v10 = 0;
        *(_WORD *)v10 = v6;
        *(_QWORD *)v7 = v10;
        *((_WORD *)v7 + 5) = 0;
        *((_WORD *)v7 + 4) = result;
        goto LABEL_5;
      }
    }
LABEL_10:
    __longjmp_chk();
  }
  v7 = &byte_2CA2EE0[(unsigned __int16)result];
LABEL_5:
  *a1 = v7 - byte_2CA2EE0;
  return result;
}

