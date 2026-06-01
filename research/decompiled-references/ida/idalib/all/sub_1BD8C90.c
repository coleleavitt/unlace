__int64 __fastcall sub_1BD8C90(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned __int64 a5, double a6)
{
  __int64 v6; // r9
  __int64 *v7; // r15
  __int64 *v8; // r14
  __int64 v11; // rbx
  int v13; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  int v35; // eax

  LODWORD(v6) = 1;
  v7 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v11 = a2;
    LOBYTE(v13) = sub_1BD2B60(a1, a2, a3);
    LODWORD(v6) = v13;
    if ( (_BYTE)v13 )
    {
      *a4 = 7;
    }
    else
    {
      v15 = sub_1BC7120((_QWORD **)(a1 + 248), a2, a3);
      v6 = v15;
      if ( (_BYTE)v15 )
      {
        *a4 = 10;
      }
      else
      {
        v19 = *v8;
        v20 = *(_QWORD *)(*(_QWORD *)(*v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1B4 )
        {
          LOBYTE(v35) = sub_F610C0(v19, a2, v16, v17, v18, v6);
          LODWORD(v6) = v35;
          if ( (_BYTE)v35 )
          {
            *a4 = 15;
            return (unsigned int)v6;
          }
          v19 = *v8;
        }
        if ( sub_F58100(v19) && (a2 = *(_QWORD *)(a1 + 248), sub_F60F80(*v7, a2, v21, v22, v23, v24))
          || sub_F61920(*v8, a2, v21, v22, v23, v24) && sub_F58100(*v7) )
        {
          *a4 = 12;
          LODWORD(v6) = 1;
        }
        else
        {
          LOBYTE(v26) = sub_1BD84A0(a1, a5, v11, a3, v25, a6);
          LODWORD(v6) = v26;
          if ( (_BYTE)v26 )
          {
            *a4 = 6;
          }
          else
          {
            v30 = sub_F61920(*v8, a5, v27, v28, v29, v26);
            LODWORD(v6) = 0;
            if ( v30 )
            {
              LOBYTE(v34) = sub_F60F80(*v7, *(_QWORD *)(a1 + 248), v31, v32, v33, 0);
              LODWORD(v6) = 0;
              if ( (_BYTE)v34 )
              {
                *a4 = 9;
                LODWORD(v6) = v34;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
