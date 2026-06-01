void __fastcall sub_1AA2760(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _BYTE v8[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 && *(_BYTE *)(a1 + 96) == 1 )
  {
    if ( a4 )
    {
      if ( *(char *)(a4 + 28) >= 0 )
      {
        v5 = *(__int64 **)(*(_QWORD *)a1 + 608LL);
        if ( *((_WORD *)v5 + 6) )
        {
          do
          {
            if ( (*((_BYTE *)v5 + 11) & 0x20) != 0 )
              return;
            if ( *((_BYTE *)v5 + 100) )
            {
              v6 = (_QWORD *)v5[10];
              v7 = &v6[*((unsigned int *)v5 + 23)];
              if ( v6 == v7 )
                goto LABEL_13;
              while ( a4 != *v6 )
              {
                if ( v7 == ++v6 )
                  goto LABEL_13;
              }
            }
            else if ( !sub_2236570(v5 + 10, a4) )
            {
              goto LABEL_13;
            }
            sub_168B9F0((__int64)v8, (__int64 *)a1, a2, 0x194Eu, 0);
            sub_15F7200(v8);
            *(_BYTE *)(a1 + 97) = 1;
LABEL_13:
            v5 = (__int64 *)*v5;
          }
          while ( v5 );
        }
      }
    }
  }
}
