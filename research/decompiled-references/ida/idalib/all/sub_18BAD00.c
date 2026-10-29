__int64 __fastcall sub_18BAD00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, double a6, double a7)
{
  __int64 *v7; // r14
  __int64 *v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rbx
  char v12; // r13
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-48h]
  char v17; // [rsp+Ch] [rbp-3Ch]

  v7 = a2;
  v9 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = a4;
  v11 = a4;
  v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v12 != 14 )
  {
    a2 = (__int64 *)a4;
    v17 = a5;
    v16 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    v13 = sub_A74CE0(*(_QWORD *)(a1 + 248), a4);
    a5 = v17;
    v9 = (__int64 *)v16;
    v10 = v13;
  }
  if ( a5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
    {
      *v7 = sub_160A600(a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v10, 0x2Fu, 0, 0, a6, a7, 0);
    }
    else
    {
      if ( v12 == 14 )
      {
        v15 = *v9;
        if ( *(_BYTE *)(*v9 + 16) != 14 )
          v15 = sub_F63050(*v9, a2, v9, a4);
        v11 = *(_QWORD *)(v15 + 32);
      }
      *v7 = sub_160A600(a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v11, 0x27u, 0, 0, a6, a7, 0);
    }
  }
  return v10;
}
