__int64 __fastcall sub_661480(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  int v5; // eax
  unsigned int that; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // rax
  __int64 flags; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v14; // [rsp+30h] [rbp-118h] BYREF
  __int64 v15; // [rsp+38h] [rbp-110h]
  __int64 v16; // [rsp+40h] [rbp-108h]
  char v17; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v18[24]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v19[144]; // [rsp+78h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+108h] [rbp-40h] BYREF

  v20 = __readfsqword(0x28u);
  if ( a3 == 5 )
  {
    v4 = qword_2CA1698;
    v5 = *(_DWORD *)(qword_2CA1698 + 764);
    if ( v5 == 8
      || v5 == 60
      || (that = 0, (~((unsigned __int16)get_flags_ex(0, 4) >> 8) & 6) != 0)
      && (that = next_that(0, 0xFFFFFFFFLL, sub_39AFB0, 0), that == -1) )
    {
LABEL_5:
      unregister_post_event_visitor(0, a1);
      return a2;
    }
    while ( 1 )
    {
      v16 = 0;
      v14 = -1;
      v15 = 0xFFFFFFFFLL;
      v9 = (unsigned __int64 *)&v17;
      do
      {
        *(_WORD *)v9 = 0;
        v9 += 3;
        *((_WORD *)v9 - 11) = 0;
        *((_WORD *)v9 - 10) = 0;
        *((_DWORD *)v9 - 1) = 0;
        *((_WORD *)v9 - 9) = 0;
        *(v9 - 2) = 0;
        *((_DWORD *)v9 - 2) = 0;
      }
      while ( &v20 != v9 );
      if ( (int)decode_insn(&v14, that, 0, 0, v7, v8) <= 0 )
        goto LABEL_21;
      flags = get_flags_ex(that, 0);
      if ( (flags & 0xF000000) == 0 || !*(_DWORD *)(v4 + 764) && WORD2(v15) == 42 )
        goto LABEL_21;
      v11 = sub_375980(0x2Fu, v19);
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_18;
      }
      else if ( v19[1] <= 1u )
      {
        goto LABEL_18;
      }
      if ( (flags & 0xF000000) != 0x5000000 || (unsigned __int8)get_refinfo(v13, that, 2) )
        flags = sub_55A400(flags, 1u, 2u);
LABEL_18:
      v12 = sub_375980(0x2Fu, v18);
      if ( v12 )
      {
        if ( v12 < 0 )
LABEL_26:
          flags &= 0xFFFFFFFFF0FFFFFFLL;
      }
      else if ( v18[1] <= 1u )
      {
        goto LABEL_26;
      }
      sub_3CAE70(*(_QWORD **)(v4 + 1480), that, flags);
LABEL_21:
      that = next_that(that, 0xFFFFFFFFLL, sub_39AFB0, 0);
      if ( that == -1 )
        goto LABEL_5;
    }
  }
  return a2;
}

