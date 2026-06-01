__int64 __fastcall sub_149FAD0(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  int *v9; // rbx
  __int64 *v10; // rdi
  int v11; // ebx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-C8h]
  __int64 v17; // [rsp+8h] [rbp-C0h]
  __int128 v18; // [rsp+10h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-A8h]
  __int128 v20; // [rsp+30h] [rbp-98h]
  _WORD v21[68]; // [rsp+40h] [rbp-88h] BYREF

  v9 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 3 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v14 + 760) )
    {
      *(_BYTE *)(v14 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v14 + 48) + 6LL) = 1;
    }
    v15 = *(_QWORD *)(a1 + 96);
    *(_WORD *)(a1 + 32) = 1;
    sub_1705A40(*(_QWORD *)(v15 + 656), *(_QWORD *)(v15 + 608));
    return 0;
  }
  else
  {
    v18 = 0;
    *(_OWORD *)ptr = 0;
    v20 = 0;
    sub_14D0170(a1, (unsigned int)&v18, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( *(_WORD *)(a1 + 32) == 5 )
    {
      if ( (_DWORD)v18 && DWORD1(v18) && !*((_QWORD *)&v18 + 1) )
      {
        v21[0] = 63;
        sub_15680D0(a1, v21, 1, 0);
        v12 = 0;
      }
      else
      {
        v10 = *(__int64 **)(a1 + 8);
        v17 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v10, v9);
        v11 = *(_DWORD *)(a1 + 40);
        *a5 = *(_DWORD *)(a1 + 16);
        if ( (unsigned __int8)sub_1569A00(a1, 63, 1644, &byte_22F0C30, 0) )
        {
          v21[0] = 63;
          sub_15680D0(a1, v21, 1, 0);
        }
        v12 = sub_1861110(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                a2,
                a3,
                a4,
                (unsigned int)&v18,
                v11,
                v17);
      }
    }
    else
    {
      sub_1564840(v21, a1, v9, 18);
      sub_AEA040((__int64)v21);
      v21[0] = 63;
      sub_15680D0(a1, v21, 1, 0);
      v12 = 0;
    }
    if ( HIDWORD(ptr[1]) )
    {
      v16 = v12;
      free(ptr[0]);
      return v16;
    }
  }
  return v12;
}
