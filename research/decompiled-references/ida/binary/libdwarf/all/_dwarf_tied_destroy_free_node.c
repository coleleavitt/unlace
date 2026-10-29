// attributes: thunk
void dwarf_tied_destroy_free_node(void *ptr)
{
  free(ptr);
}

