void __fastcall sub_750CC0(__int16 *a1)
{
  int v1; // esi
  __int64 v2; // rdx
  __int64 v3; // rdx
  _BYTE *v4; // rcx
  __int16 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rsi

  if ( *a1 )
  {
    v1 = dword_2CAA4F0;
    v2 = (unsigned int)(dword_2CAA4F0 - 1);
    dword_2CAA4F0 = v2;
    if ( (int)v2 >= 0 )
    {
      v3 = 16 * (v2 + 125);
      v4 = &byte_2CA2EE0[v3];
      *(_QWORD *)v4 = 14906;
      *((_DWORD *)v4 + 2) = 0x20000;
      v5 = *a1;
      if ( !*a1 )
      {
LABEL_4:
        *a1 = v4 - byte_2CA2EE0;
        return;
      }
      v6 = (unsigned int)(v1 - 2);
      if ( v1 == 1 )
      {
        dword_2CAA4F0 = -1;
      }
      else
      {
        v7 = (unsigned int)(v1 - 3);
        dword_2CAA4F0 = v7;
        v4 = &byte_2CA2EE0[16 * v6 + 2000];
        if ( (_DWORD)v7 != -1 )
        {
          v8 = &byte_2CA2EE0[16 * v7 + 2000];
          *v8 = 0;
          *(_WORD *)v8 = v5;
          *(_QWORD *)v4 = v8;
          *((_WORD *)v4 + 5) = 0;
          *((_WORD *)v4 + 4) = v3;
          goto LABEL_4;
        }
      }
    }
    __longjmp_chk();
  }
}

