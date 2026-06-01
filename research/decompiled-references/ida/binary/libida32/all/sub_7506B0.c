__int64 __fastcall sub_7506B0(__int16 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int16 v3; // r8
  _BYTE *v4; // rdx
  int v5; // edx
  __int64 v6; // rcx
  _DWORD *v7; // rcx

  result = *a2;
  if ( (_WORD)result )
  {
    v3 = *a1;
    v4 = &byte_2CA2EE0[result];
    if ( !*a1 )
    {
LABEL_3:
      *a1 = v4 - byte_2CA2EE0;
      return result;
    }
    v5 = dword_2CAA4F0 - 1;
    if ( dword_2CAA4F0 - 1 < 0 )
    {
      --dword_2CAA4F0;
    }
    else
    {
      v6 = (unsigned int)(dword_2CAA4F0 - 2);
      dword_2CAA4F0 = v6;
      v4 = &byte_2CA2EE0[16 * v5 + 2000];
      if ( (_DWORD)v6 != -1 )
      {
        v7 = &byte_2CA2EE0[16 * v6 + 2000];
        *v7 = 0;
        *(_WORD *)v7 = v3;
        *(_QWORD *)v4 = v7;
        *((_WORD *)v4 + 5) = 0;
        *((_WORD *)v4 + 4) = result;
        goto LABEL_3;
      }
    }
    __longjmp_chk();
  }
  return result;
}

