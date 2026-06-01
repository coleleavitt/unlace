__int64 __fastcall sub_76FDE0(__int16 *a1, char a2)
{
  unsigned __int64 v3; // rbp
  int v5; // edx
  unsigned __int16 v6; // dx
  __int16 v7; // di
  _BYTE *v8; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rsi
  _DWORD *v13; // rsi

  v3 = a2 & 7;
  v5 = dword_2CD44CC & 7;
  if ( v5 != 6 )
  {
    if ( (~(_BYTE)dword_2CD44CC & 3) == 0 )
      return 0;
    if ( v5 == (_DWORD)v3 )
      return 0;
    if ( v5 == 1 )
    {
      v10 = 33;
      if ( _bittest64(&v10, v3) )
        return 0;
    }
  }
  if ( *a1 )
    sub_76FD20(a1, 0x20u);
  switch ( a2 & 7 )
  {
    case 0:
      v6 = sub_76FAC0("__near");
      if ( v6 )
        goto LABEL_9;
      goto LABEL_12;
    case 1:
      v6 = sub_76FAC0("__segm");
      if ( v6 )
        goto LABEL_9;
      goto LABEL_12;
    case 2:
      v6 = sub_76FAC0("__far");
      if ( v6 )
        goto LABEL_9;
      goto LABEL_12;
    case 3:
      v6 = sub_76FAC0("__far16");
      if ( v6 )
        goto LABEL_9;
      goto LABEL_12;
    case 4:
      v6 = sub_76FAC0("__huge");
      if ( v6 )
        goto LABEL_9;
      goto LABEL_12;
    case 5:
      v6 = sub_76FAC0("__ptr64");
      if ( !v6 )
        goto LABEL_12;
LABEL_9:
      v7 = *a1;
      if ( !*a1 )
      {
        v8 = &byte_2CCCDE0[v6];
        goto LABEL_11;
      }
      v11 = dword_2CD43F0 - 1;
      if ( dword_2CD43F0 - 1 < 0 )
      {
        --dword_2CD43F0;
LABEL_32:
        __longjmp_chk(env, 4294967288LL);
      }
      v12 = (unsigned int)(dword_2CD43F0 - 2);
      dword_2CD43F0 = v12;
      v8 = &byte_2CCCDE0[16 * v11 + 2000];
      if ( (_DWORD)v12 == -1 )
        goto LABEL_32;
      v13 = &byte_2CCCDE0[16 * v12 + 2000];
      *v13 = 0;
      *(_WORD *)v13 = v7;
      *(_QWORD *)v8 = v13;
      *((_WORD *)v8 + 5) = 0;
      *((_WORD *)v8 + 4) = v6;
LABEL_11:
      *a1 = v8 - byte_2CCCDE0;
LABEL_12:
      if ( (a2 & 0x10) != 0 )
      {
        if ( *a1 )
          sub_76FD20(a1, 0x20u);
      }
      return 1;
    default:
      goto LABEL_12;
  }
}
