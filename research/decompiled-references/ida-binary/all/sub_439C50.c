__int64 __fastcall sub_439C50(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebp
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int128 v18; // [rsp+8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 72);
  v19 = __readfsqword(0x28u);
  v3 = sub_534430(v2);
  if ( v3 )
    sub_537630(v3, 1, "Get the latest revision");
  v4 = *(_DWORD *)(a2 + 8);
  if ( ((v4 - 63) & 0xFFFFFFFD) == 0 )
  {
    v17 = 0;
    v18 = 0;
    v7 = sub_4339F0((const char *)&v17, (_QWORD *)a2, 6u);
    v8 = v17;
    if ( v7 )
    {
      v9 = v18;
      if ( !(_QWORD)v18 )
      {
        v5 = 3;
        if ( !v17 )
          return v5;
        goto LABEL_22;
      }
      a2 = v17 + 48 * v18;
      if ( a2 == v17 )
      {
LABEL_27:
        v5 = 7;
      }
      else
      {
        v10 = v17;
        while ( 1 )
        {
          v11 = *(_DWORD *)(v10 + 24);
          if ( (v11 & 4) == 0 && (v11 & 2) != 0 )
            break;
          if ( (v11 & 0x20) != 0 )
            break;
          v10 += 48;
          if ( a2 == v10 )
            goto LABEL_27;
        }
        v5 = 3;
      }
      if ( !v17 )
        return v5;
    }
    else
    {
      v5 = 7;
      if ( !v17 )
        return v5;
      v9 = v18;
      if ( !(_QWORD)v18 )
        goto LABEL_22;
    }
    v12 = 0;
    do
    {
      v13 = (__int64 *)(v8 + 48 * v12);
      v14 = *v13;
      if ( *v13 )
      {
        v13[1] = 0;
        qfree(v14, (const char *)a2);
        v8 = v17;
      }
      ++v12;
    }
    while ( v12 != v9 );
LABEL_22:
    *(_QWORD *)&v18 = 0;
    qfree(v8, (const char *)a2);
    return v5;
  }
  if ( v4 == 64 )
  {
    v15 = sub_534430(*(_QWORD *)(a2 + 72));
    if ( v15 )
      sub_537630(v15, 1, "Sync to this commit...");
    if ( *(_QWORD *)(a2 + 56) != 1 )
      return 7;
  }
  else if ( (unsigned int)(v4 - 69) <= 1 )
  {
    v16 = sub_534430(*(_QWORD *)(a2 + 72));
    if ( v16 )
      sub_537630(v16, 1, "Sync to this revision");
    if ( !*(_QWORD *)(a2 + 56) )
      return 7;
  }
  return 3;
}
