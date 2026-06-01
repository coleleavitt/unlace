__int64 __fastcall sub_BDE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 prev_seg; // rax
  unsigned __int64 v11; // r15
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD v16[11]; // [rsp+0h] [rbp-58h] BYREF

  v8 = *a2;
  v16[3] = __readfsqword(0x28u);
  prev_seg = get_prev_seg(v8);
  if ( prev_seg )
  {
    v11 = *(_QWORD *)(prev_seg + 8);
    v12 = (unsigned __int8)add_segm_ex(a2, a3, a4, a5);
    v13 = get_prev_seg(*a2);
    v14 = -1;
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 8);
    if ( v11 < v14 )
    {
      v16[0] = v11;
      v16[1] = v14;
      rangeset_t_add(a1 + 401, v16);
    }
  }
  else
  {
    v12 = (unsigned __int8)add_segm_ex(a2, a3, a4, a5);
    get_prev_seg(*a2);
  }
  return v12;
}

