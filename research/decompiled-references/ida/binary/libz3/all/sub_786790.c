bool __fastcall sub_786790(__int64 *a1)
{
  __int64 v1; // rbx
  const void *v2; // rdi
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // rax
  bool result; // al

  v1 = *a1;
  result = *a1
        && ((v2 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 192) + 88LL))(*(_QWORD *)(v1 + 192))) == nullptr
         || (v3 = (char *)__dynamic_cast(
                            v2,
                            (const struct __class_type_info *)&`typeinfo for'sat::extension,
                            (const struct __class_type_info *)&`typeinfo for'euf::solver,
                            0)) == nullptr
          ? (v4 = (char *)(v1 + 256))
          : (v4 = v3 + 2208),
            (v5 = *((_QWORD *)v4 + 1)) != 0)
        && *(_DWORD *)(v5 - 4) != 0;
  return result;
}

