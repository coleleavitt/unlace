void __fastcall sub_770DE0(unsigned __int16 *a1)
{
  int v1; // r9d
  int v2; // r10d
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  _BYTE *v8; // rcx
  unsigned __int16 v10; // dx
  _BYTE *v11; // rcx
  __int64 v12; // rcx
  int v13; // r9d
  _DWORD *v14; // rax

  dword_2CD44C8 |= 0x20000u;
  if ( (dword_2CD44CC & 0x1000) == 0 )
  {
    v1 = dword_2CD43F0;
    HIWORD(v2) = 0;
    v3 = dword_2CD43F0 - 1;
    dword_2CD43F0 = v3;
    if ( v3 >= 0 )
    {
      v5 = (unsigned int)v3;
      v6 = 6;
      v7 = 16 * (v5 + 125);
      v8 = &byte_2CCCDE0[v7];
      *(_QWORD *)v8 = "static ";
      *((_DWORD *)v8 + 2) = 458752;
      do
        v8[v6] = aStatic_0[v6];
      while ( v6-- != 0 );
      v10 = *a1;
      LOWORD(v2) = v7;
      if ( !*a1 )
        goto LABEL_6;
      if ( !(_WORD)v7 )
      {
        v11 = &byte_2CCCDE0[v10];
LABEL_9:
        LOWORD(v2) = (_WORD)v11 - (unsigned __int16)byte_2CCCDE0;
LABEL_6:
        *(_DWORD *)a1 = v2;
        return;
      }
      v12 = (unsigned int)(v1 - 2);
      if ( v1 == 1 )
      {
        dword_2CD43F0 = -1;
      }
      else
      {
        v13 = v1 - 3;
        dword_2CD43F0 = v13;
        v11 = &byte_2CCCDE0[16 * v12 + 2000];
        if ( v13 != -1 )
        {
          v14 = &byte_2CCCDE0[16 * v13 + 2000];
          *v14 = 0;
          *(_WORD *)v14 = v7;
          *(_QWORD *)v11 = v14;
          *((_WORD *)v11 + 5) = 0;
          *((_WORD *)v11 + 4) = v10;
          goto LABEL_9;
        }
      }
    }
    __longjmp_chk(env, 4294967288LL);
  }
}
