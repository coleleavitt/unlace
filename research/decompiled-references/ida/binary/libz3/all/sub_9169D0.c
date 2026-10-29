__int64 __fastcall sub_9169D0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v5; // rdi
  char *v6; // rax
  char *v7; // rbx
  unsigned int v8; // ebp
  char *v9; // r12
  unsigned __int8 v10; // al
  char v12; // al
  char v13; // dl
  char v14; // [rsp+Fh] [rbp-B9h] BYREF
  void *v15; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-B0h]
  _BYTE v17[168]; // [rsp+20h] [rbp-A8h] BYREF

  v5 = *a1;
  v15 = v17;
  v16 = 0x1000000000LL;
  if ( (unsigned __int8)sub_15D3050(v5, a2, &v15) )
  {
    v6 = (char *)v15;
  }
  else
  {
    v12 = sub_15D2F00(*a1, a2, &v14, &v15);
    v7 = (char *)v15;
    v13 = v12;
    v6 = (char *)v15;
    if ( !v13 || v14 != a3 )
    {
      v8 = 0;
      goto LABEL_6;
    }
  }
  v7 = v6;
  v8 = 0;
  v9 = &v6[8 * (unsigned int)v16];
  if ( v9 != v6 )
  {
    do
    {
      v10 = sub_180D470(v7, 64);
      v7 += 8;
      v8 += v10;
    }
    while ( v7 != v9 );
    v7 = (char *)v15;
  }
LABEL_6:
  if ( v7 && v7 != v17 )
    sub_186B220(v7);
  return v8;
}

