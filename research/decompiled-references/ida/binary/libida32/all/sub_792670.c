__int64 __fastcall sub_792670(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r12d
  __int16 v7; // r15
  unsigned int v10; // ebx
  __int16 v11; // ax
  int v12; // r15d
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(_QWORD); // rdx
  unsigned int v15; // eax
  char v17; // [rsp+17h] [rbp-71h]
  unsigned int v18; // [rsp+18h] [rbp-70h]
  unsigned __int32 v19; // [rsp+1Ch] [rbp-6Ch]
  _WORD *v20; // [rsp+20h] [rbp-68h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v7 = a5;
  v10 = sub_794790(a1, a2, a3, a5);
  if ( v10 >= a4 )
  {
    return 0;
  }
  else
  {
    v11 = v7;
    v12 = v7 & 0x800;
    v17 = v11;
    v5 = 0;
    v19 = _byteswap_ulong(a2);
    v18 = v11 & 0x100;
    v20 = (_WORD *)(a1 + 45);
    do
    {
      v14 = (__int64 (__fastcall *)(_QWORD))v18;
      v15 = v10;
      if ( v18 )
      {
        v14 = unk_2CAA7A8;
        if ( unk_2CAA7A8 )
          v15 = unk_2CAA7A8(v10);
      }
      *(_DWORD *)(a1 + 48) = v19;
      *(_BYTE *)(a1 + 52) = v17;
      if ( v12 )
        *(_BYTE *)(a1 + 53) = v15;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(v15);
      v13 = *(_QWORD *)a1;
      *(_WORD *)(a1 + 45) = v12 == 0 ? 10 : 7;
      if ( *(_BYTE *)(v13 + 5988) && (unsigned __int8)must_journal(v13, v19, v14) )
      {
        ptr = nullptr;
        v22 = 0;
        if ( !(unsigned __int8)sub_71A170(v13, v20, (__int64)&ptr) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v22 = 0;
            qfree(ptr);
          }
LABEL_19:
          if ( !under_debugger )
            interr(259);
          BUG();
        }
        add_undo_record(1, ptr, v22);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
      }
      else if ( !(unsigned __int8)sub_71A170(v13, v20, 0) )
      {
        goto LABEL_19;
      }
      ++v5;
      v10 = sub_794710(a1, a2, v10, a5);
    }
    while ( v10 < a4 );
  }
  return v5;
}

