__int64 __fastcall sub_18C0160(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, double a6, double a7)
{
  __int64 *v9; // rbx
  unsigned int v10; // ebp
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // r13
  __int64 v20; // rax

  v9 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F57BD0(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL)) )
    return 1;
  LOBYTE(v12) = sub_F58100(*v9);
  v10 = v12;
  if ( (_BYTE)v12 )
  {
    return 1;
  }
  else if ( !(_BYTE)a5 )
  {
    LOBYTE(v16) = sub_9EC890(*v9, (__int64)a2, v13, v14, v15);
    v10 = v16;
    if ( (_BYTE)v16 )
    {
      v19 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *v19;
      if ( *(_BYTE *)(*v19 + 16) != 14 )
        v20 = sub_F63050(*v19, a2, v17, v18);
      v10 = a5;
      *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v20 + 32), 0x1Du, 0, 0, a6, a7, 0);
    }
    else
    {
      *a2 = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, a4, 0x35u, 0, 0, a6, a7, 0);
    }
  }
  return v10;
}
