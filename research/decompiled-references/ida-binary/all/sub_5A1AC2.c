__int64 __fastcall sub_5A1AC2(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // eax
  _BYTE v15[120]; // [rsp+10h] [rbp-E0h] BYREF
  _QWORD *k; // [rsp+88h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+90h] [rbp-60h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-40h] BYREF
  unsigned __int64 *v19; // [rsp+B8h] [rbp-38h]
  unsigned __int64 *v20; // [rsp+C0h] [rbp-30h]
  unsigned int v21; // [rsp+CCh] [rbp-24h]
  unsigned int j; // [rsp+D0h] [rbp-20h]
  unsigned int v23; // [rsp+D4h] [rbp-1Ch]
  unsigned int i; // [rsp+D8h] [rbp-18h]
  unsigned int v25; // [rsp+DCh] [rbp-14h]

  v2 = sub_598368(*(_QWORD *)(a1 + 32));
  v21 = sub_5986F2(v2);
  v25 = sub_5A4A8E(*(_QWORD *)(a1 + 128));
  for ( i = 0; ; ++i )
  {
    v3 = sub_598368(*(_QWORD *)(a1 + 32));
    if ( i >= (unsigned __int64)sub_5986F2(v3) )
      break;
    v4 = sub_598368(*(_QWORD *)(a1 + 32));
    v19 = *(unsigned __int64 **)sub_59871A(v4, i);
    if ( sub_5A198F((__int64)v19) && (unsigned __int8)sub_5A19DE(a1, v19) != 1 )
      ++v25;
  }
  sub_5A47A8(v17, a1 + 40);
  if ( v25 )
  {
    if ( (unsigned __int8)sub_5A480C(v17, v25, 108) != 1 )
    {
      v6 = 0;
      goto LABEL_32;
    }
  }
  else if ( (unsigned __int8)sub_5A4AA8(v17) != 1 )
  {
    v6 = 0;
    goto LABEL_32;
  }
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 4) = sub_5A4152(v17);
  v7 = v25;
  *(_DWORD *)sub_5A4884(v17) = v7;
  v23 = 0;
  for ( j = 0; j < v21; ++j )
  {
    v8 = sub_598368(*(_QWORD *)(a1 + 32));
    v20 = *(unsigned __int64 **)sub_59871A(v8, j);
    if ( sub_5A198F((__int64)v20) && !(unsigned __int8)sub_5A19DE(a1, v20) )
    {
      if ( (unsigned __int8)sub_5A1E52(a1, v20, 1, j, v15, 0) != 1 )
      {
        v6 = 0;
        goto LABEL_32;
      }
      v10 = v23++;
      sub_5A4954(v17, v10, v15, 108);
    }
  }
  for ( k = (_QWORD *)sub_59843E(*(_QWORD **)(a1 + 128)); ; sub_5984AE(&k) )
  {
    v18 = sub_598466(*(_QWORD *)(a1 + 128));
    if ( !sub_59848C(&k, &v18) )
      break;
    v11 = sub_5984CE(&k) + 296;
    v12 = sub_5984CE(&k);
    if ( (unsigned __int8)sub_5A1E52(a1, v12, 0, 0, v15, v11) != 1 )
    {
      v6 = 0;
      goto LABEL_32;
    }
    v13 = v23++;
    sub_5A4954(v17, v13, v15, 108);
  }
  v6 = 1;
LABEL_32:
  sub_5A47E4(v17);
  return v6;
}
