__int64 __fastcall sub_750B70(unsigned __int16 *a1, __int16 *a2)
{
  int v2; // ecx
  __int16 v3; // r8
  __int16 v4; // si
  __int64 v5; // rax
  __int64 result; // rax
  _BYTE *v7; // rdx
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  _DWORD *v13; // rcx
  _BYTE *v14; // rax
  int v15; // eax
  __int64 v16; // r8
  _DWORD *v17; // r8

  v2 = dword_2CAA4F0;
  v3 = *a2;
  v4 = a2[1];
  v5 = (unsigned int)(dword_2CAA4F0 - 1);
  dword_2CAA4F0 = v5;
  if ( (int)v5 < 0 )
    goto LABEL_15;
  result = 16 * (v5 + 125);
  v7 = &byte_2CA2EE0[result];
  *(_QWORD *)v7 = 14906;
  *((_DWORD *)v7 + 2) = 0x20000;
  if ( v3 )
  {
    v10 = (unsigned int)(v2 - 2);
    if ( v2 == 1 )
    {
      dword_2CAA4F0 = -1;
      goto LABEL_15;
    }
    v11 = (unsigned int)(v2 - 3);
    dword_2CAA4F0 = v11;
    v12 = &byte_2CA2EE0[16 * v10 + 2000];
    if ( (_DWORD)v11 == -1 )
      goto LABEL_15;
    v13 = &byte_2CA2EE0[16 * v11 + 2000];
    *v13 = 0;
    *(_WORD *)v13 = v3;
    *(_QWORD *)v12 = v13;
    *((_WORD *)v12 + 4) = result;
    *((_WORD *)v12 + 5) = 0;
    v8 = *a1;
    v9 = v12 - byte_2CA2EE0;
    result = (unsigned int)v9;
    if ( !*a1 )
      goto LABEL_4;
  }
  else
  {
    v8 = *a1;
    LOWORD(v9) = result;
    result = (unsigned int)result;
    if ( !*a1 )
    {
LABEL_4:
      *a1 = result;
      a1[1] = v4;
      return result;
    }
  }
  if ( (_WORD)v9 )
  {
    v15 = dword_2CAA4F0 - 1;
    if ( dword_2CAA4F0 - 1 < 0 )
    {
      --dword_2CAA4F0;
    }
    else
    {
      v16 = (unsigned int)(dword_2CAA4F0 - 2);
      dword_2CAA4F0 = v16;
      v14 = &byte_2CA2EE0[16 * v15 + 2000];
      if ( (_DWORD)v16 != -1 )
      {
        v17 = &byte_2CA2EE0[16 * v16 + 2000];
        *v17 = 0;
        *(_WORD *)v17 = v9;
        *(_QWORD *)v14 = v17;
        *((_WORD *)v14 + 5) = 0;
        *((_WORD *)v14 + 4) = v8;
        goto LABEL_10;
      }
    }
LABEL_15:
    __longjmp_chk();
  }
  v14 = &byte_2CA2EE0[v8];
LABEL_10:
  result = (unsigned int)v14 - (unsigned int)byte_2CA2EE0;
  a1[1] = v4;
  *a1 = result;
  return result;
}

