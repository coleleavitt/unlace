unsigned __int64 __fastcall sub_4CCE50(__int64 *a1, __int64 *a2, __int64 a3, int a4, __int16 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  size_t v9; // rax
  size_t v10; // rbx
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // rax
  size_t v15; // rax
  size_t v16; // rbx
  void *v17; // rdi
  size_t v18; // r13
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-480h]
  void *ptr; // [rsp+20h] [rbp-468h] BYREF
  __int128 v22; // [rsp+28h] [rbp-460h]
  char s[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v24; // [rsp+448h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  sub_4CCB80(a1, a3, a4, a5);
  v7 = sub_505D70(a1 + 203, a3);
  if ( v7 )
  {
    v20 = v7;
    get_segm_para(v7);
    v8 = *a1;
    ptr = nullptr;
    v22 = 0;
    switch ( (unsigned __int8)sub_631AD0(v8, 35) )
    {
      case 0u:
      case 3u:
        sub_631AD0(*a1, 12);
        goto LABEL_3;
      case 2u:
      case 5u:
      case 9u:
        sub_510BD0(a1, &ptr, v20, 0);
        sub_4C9A10(s);
        v15 = strlen(s);
        v16 = v15;
        if ( v15 )
        {
          v17 = (void *)*a2;
          v18 = v15 + 1;
          if ( a2[2] < v15 + 1 )
          {
            v19 = qvector_reserve(a2, *a2, v15 + 1, 1);
            *a2 = v19;
            v17 = (void *)v19;
          }
          a2[1] = v18;
          memmove(v17, s, v16);
          *(_BYTE *)(*a2 + v16) = 0;
        }
        else
        {
          a2[1] = 0;
        }
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
        break;
      case 0xAu:
        sub_4CB130(a1, a3);
        goto LABEL_3;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_4C9A10(s);
    v9 = strlen(s);
    v10 = v9;
    if ( v9 )
    {
      v12 = (void *)*a2;
      v13 = v9 + 1;
      if ( a2[2] < v9 + 1 )
      {
        v14 = qvector_reserve(a2, *a2, v9 + 1, 1);
        *a2 = v14;
        v12 = (void *)v14;
      }
      a2[1] = v13;
      memmove(v12, s, v10);
      *(_BYTE *)(*a2 + v10) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  return v24 - __readfsqword(0x28u);
}
