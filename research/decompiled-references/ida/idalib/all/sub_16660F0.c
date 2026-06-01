__int64 __fastcall sub_16660F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v7; // r13
  int *v8; // rcx
  __int64 v9; // rbp
  int *v10; // rbx
  int *v11; // r14
  _QWORD *v12; // rdi
  __int64 i; // [rsp+0h] [rbp-B0h]
  __int64 v14; // [rsp+28h] [rbp-88h]
  __int64 v15; // [rsp+30h] [rbp-80h]
  __int16 v16; // [rsp+46h] [rbp-6Ah] BYREF
  __int64 v17; // [rsp+48h] [rbp-68h] BYREF
  void *ptr; // [rsp+50h] [rbp-60h]
  __int64 v19; // [rsp+58h] [rbp-58h]
  _QWORD v20[10]; // [rsp+60h] [rbp-50h] BYREF

  result = *(unsigned int *)(a1 + 2024);
  if ( (_DWORD)result )
  {
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B
      || (v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v4 + 16) != 13)
      || ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      v14 = *(_QWORD *)(a1 + 2016);
      v15 = v14 + 144 * result;
      do
      {
        v7 = *(_QWORD *)(v14 + 16);
        for ( i = v7 + 56LL * *(unsigned int *)(v14 + 24); v7 != i; v7 += 56 )
        {
          v8 = *(int **)(v7 + 16);
          v9 = *(_QWORD *)(v7 + 8);
          v10 = &v8[*(unsigned int *)(v7 + 24)];
          if ( v8 != v10 )
          {
            v11 = *(int **)(v7 + 16);
            while ( !sub_15D82E0(v9, a3, *v11) )
            {
              if ( v10 == ++v11 )
                goto LABEL_13;
            }
            *(_BYTE *)(v7 + 48) = 1;
            v20[0] = v9;
            *(_QWORD *)(a1 + 2320) = a3;
            v19 = 0x200000001LL;
            v17 = 0;
            ptr = v20;
            v16 = 1;
            sub_1836B60(a1, a2, a3, &v17, &v16);
            v12 = ptr;
            *(_QWORD *)(a1 + 2320) = 0;
            if ( v12 != v20 )
              free(v12);
          }
LABEL_13:
          ;
        }
        v14 += 144;
        result = v14;
      }
      while ( v14 != v15 );
    }
  }
  return result;
}
