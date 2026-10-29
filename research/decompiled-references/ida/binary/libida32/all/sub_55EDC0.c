__int64 __fastcall sub_55EDC0(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned __int64 v8; // rax
  char v9; // al
  __int64 v10; // rsi
  char refinfo; // al
  int segm_base; // ebx
  unsigned int *v14; // rax
  unsigned int *v15; // r15
  __int64 v16; // r15
  unsigned int *v17; // rax
  unsigned int *v18; // r13
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v6 = a2[2];
  v23 = __readfsqword(0x28u);
  v8 = sub_3B9AA0(a1, v6, 0);
  v9 = is_off(v8, a4);
  v10 = (unsigned int)a2[2];
  if ( v9 )
  {
    refinfo = get_refinfo(&ptr, v10, a4);
    segm_base = HIDWORD(ptr);
    if ( !refinfo )
    {
LABEL_17:
      segm_base = 16 * *a2;
      return segm_base + a3;
    }
  }
  else
  {
    v14 = sub_4EE820(a1 + 1552, v10);
    v15 = v14;
    if ( !v14 )
      goto LABEL_17;
    segm_base = get_segm_base(v14);
    if ( a3 < *v15 - segm_base || a3 >= v15[1] - segm_base )
    {
      ptr = nullptr;
      v22 = 0;
      if ( sub_666940(a1, &ptr, *v15) > 0 && (int)v22 > 0 )
      {
        v16 = 0;
        v20 = 4LL * (unsigned int)(v22 - 1) + 4;
        while ( 1 )
        {
          v17 = sub_4EE820(a1 + 1552, *(unsigned int *)((char *)ptr + v16));
          v18 = v17;
          if ( v17 )
          {
            v19 = get_segm_base(v17);
            if ( a3 < v18[1] - v19 && a3 >= *v18 - v19 && v19 != -1 )
              break;
          }
          v16 += 4;
          if ( v20 == v16 )
            goto LABEL_15;
        }
        segm_base = v19;
      }
LABEL_15:
      if ( ptr )
      {
        *(_QWORD *)&v22 = 0;
        qfree(ptr);
      }
    }
  }
  if ( segm_base == -1 )
    goto LABEL_17;
  return segm_base + a3;
}

