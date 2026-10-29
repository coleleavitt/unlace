void __fastcall sub_6AA9A0(__int64 *a1)
{
  __int64 (__fastcall ***v2)(); // r13
  __int64 (__fastcall *v3)(); // rax
  __int64 (__fastcall **v4)(); // rdi
  unsigned int v5; // ebp
  __int64 (__fastcall *v6)(); // rbx
  __int64 (__fastcall *v7)(); // rdi
  __int64 (__fastcall **v8)(); // rsi
  __int64 (__fastcall **v9)(); // rdi
  void *v11; // rdi

  v2 = (__int64 (__fastcall ***)())a1[8];
  if ( v2 )
  {
    v3 = **v2;
    if ( v3 == sub_6B0190 )
    {
      v4 = v2[6];
      v5 = 0;
      *v2 = &off_1C52FD8;
      if ( v4 )
      {
        while ( v5 < *((_DWORD *)v4 - 1) )
        {
          while ( 1 )
          {
            v6 = v4[v5];
            if ( v6 )
              break;
            if ( ++v5 >= *((_DWORD *)v4 - 1) )
              goto LABEL_15;
          }
          v7 = v4[v5++];
          (**(void (__fastcall ***)(__int64 (__fastcall *)()))v6)(v7);
          sub_186B220(v6);
          v4 = v2[6];
          if ( !v4 )
            goto LABEL_7;
        }
LABEL_15:
        sub_186B220(v4 - 1);
        v8 = v2[3];
        if ( !v8 )
          goto LABEL_10;
        goto LABEL_8;
      }
LABEL_7:
      v8 = v2[3];
      if ( v8 )
      {
LABEL_8:
        v9 = v2[4];
        if ( (*((_DWORD *)v8 + 2))-- == 1 )
          sub_15D7BC0(v9, v8);
      }
    }
    else
    {
      ((void (__fastcall *)(__int64))v3)(a1[8]);
    }
LABEL_10:
    sub_186B220(v2);
  }
  v11 = (void *)a1[5];
  if ( v11 )
    sub_186B220(v11);
  sub_2334C0(a1 + 3);
  sub_18572D0(a1 + 2);
}

