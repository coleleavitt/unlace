__int64 __fastcall sub_8F41B0(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rax
  unsigned int v7; // ebx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v14[5]; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-60h]
  unsigned __int64 v16; // [rsp+68h] [rbp-30h]

  v5 = *a1;
  v16 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD))(v5 + 32))(a1, &v13, a3, (16 * a4) | 9u);
  if ( !v7 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 96))(a1, v14, a3);
    if ( v7 )
      goto LABEL_9;
    v9 = v15;
    v10 = a2[1];
    v14[0] = v15;
    if ( v10 < v15 )
    {
      v11 = *a2;
      if ( a2[2] < v15 )
      {
        v12 = qvector_reserve(a2, v11, v15, 1);
        v10 = a2[1];
        *a2 = v12;
        v11 = v12;
      }
      memset((void *)(v11 + v10), 0, v9 - v10);
      a2[1] = v9;
    }
    else if ( v15 != v10 )
    {
      a2[1] = v15;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v13 + 16LL))(v13, v14, *a2);
    if ( v7 )
LABEL_9:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, 0);
    else
      return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 1);
  }
  return v7;
}
