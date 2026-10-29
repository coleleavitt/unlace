void __fastcall sub_20358A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  char v5; // al
  __int64 v6; // r12
  unsigned int v7; // eax
  const void *v8; // rax
  size_t v9; // rdx
  void *v10; // rdi
  size_t v11; // r15
  __int64 v12; // r12
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // rdi
  _BYTE *v18; // rax
  char v19; // al
  void *v20[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF

  v3 = sub_2049410(a2);
  v4 = sub_2049420(a2);
  if ( v3 != v4 )
  {
LABEL_2:
    v5 = sub_20492F0(v3);
    v6 = *a1;
    if ( v5 )
    {
LABEL_3:
      v7 = sub_2049310(v3);
      v8 = (const void *)sub_2048830(v7);
      v10 = *(void **)(v6 + 32);
      v11 = v9;
      if ( *(_QWORD *)(v6 + 24) - (_QWORD)v10 < v9 )
      {
        sub_227BF10(v6, v8, v9);
      }
      else if ( v9 )
      {
        memcpy(v10, v8, v9);
        *(_QWORD *)(v6 + 32) += v11;
      }
      v12 = sub_2049330(v3);
      if ( v12 )
      {
        v13 = *a1;
        v14 = *(_BYTE **)(*a1 + 32);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(*a1 + 24) )
        {
          sub_227BA10(v13, 40);
        }
        else
        {
          *(_QWORD *)(v13 + 32) = v14 + 1;
          *v14 = 40;
        }
        sub_2034FF0((__int64)(a1 + 5), v12, *a1);
        v15 = *a1;
        v16 = *(_BYTE **)(*a1 + 32);
        if ( (unsigned __int64)v16 >= *(_QWORD *)(*a1 + 24) )
        {
          sub_227BA10(v15, 41);
        }
        else
        {
          *(_QWORD *)(v15 + 32) = v16 + 1;
          *v16 = 41;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        sub_20497C0(v20, v3, 0);
        sub_227BF10(v6, v20[0], v20[1]);
        if ( v20[0] == &v21 )
          break;
        operator delete(v20[0]);
        v3 += 8;
        if ( v4 == v3 )
          return;
LABEL_12:
        v17 = *a1;
        v18 = *(_BYTE **)(*a1 + 32);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(*a1 + 24) )
        {
          sub_227BA10(v17, 32);
          goto LABEL_2;
        }
        *(_QWORD *)(v17 + 32) = v18 + 1;
        *v18 = 32;
        v19 = sub_20492F0(v3);
        v6 = *a1;
        if ( v19 )
          goto LABEL_3;
      }
    }
    v3 += 8;
    if ( v4 != v3 )
      goto LABEL_12;
  }
}
