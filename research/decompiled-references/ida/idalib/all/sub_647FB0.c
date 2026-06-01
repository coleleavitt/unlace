__int64 __fastcall sub_647FB0(__int64 *a1, char a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  const char *v7; // rsi
  unsigned int v8; // ebx
  __int64 v10; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  if ( create_numbered_type_name(&ptr, a3) >= 0 )
  {
    v4 = a1[1];
    v5 = 2;
    if ( v4 )
      v5 = v4-- + 1;
    v6 = *a1;
    if ( a1[2] < v5 )
    {
      v10 = qvector_reserve(a1, v6, v5, 1);
      *a1 = v10;
      v6 = v10;
    }
    a1[1] = v5;
    *(_BYTE *)(v6 + v4) = a2;
    *(_BYTE *)(*a1 + v4 + 1) = 0;
    if ( (a2 & 0x3F) == 0x3D )
    {
      v7 = haystack;
      if ( !(_QWORD)v12 )
      {
LABEL_8:
        v8 = sub_6A99B0(a1, v7);
        goto LABEL_9;
      }
    }
    else
    {
      sub_6B2CF0(a1, 0);
      v7 = haystack;
      if ( !(_QWORD)v12 )
        goto LABEL_8;
    }
    v7 = (const char *)ptr;
    goto LABEL_8;
  }
  v8 = 0;
LABEL_9:
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v8;
}
